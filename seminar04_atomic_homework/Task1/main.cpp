#include <atomic>
#include <thread>
#include <iostream>

template<typename T>
class AtomicQueue {
private:
    struct Node {
        T data;
        Node* next;

        Node(const T& data) : data(data), next(nullptr) {}
    };

    std::atomic<Node*> head;
    std::atomic<Node*> tail;
    std::atomic<Node*> to_delete;

public:
    AtomicQueue() : head(nullptr), tail(nullptr), to_delete(nullptr) {}

    void push(const T& data) { 
        Node* new_node = new Node(data);
        new_node->next = nullptr;

        Node* curr_tail = tail.load();
        if (curr_tail) {
            curr_tail->next = new_node;
        }
        tail.store(new_node);

        if (!head.load()) {
            head.store(new_node);
        }
    }

    bool pop(T& data) {
        Node* curr_head = head.load();

        if (!curr_head) {
            return false;
        }

        head.store(curr_head->next);

        data = curr_head->data;

        Node* to_delete_node = to_delete.load();
        while (!to_delete.compare_exchange_weak(to_delete_node, curr_head)) {
            to_delete_node = to_delete.load();
        }

        return true;
    }

    void cleanup() {
        Node* to_delete_node = to_delete.exchange(nullptr);
        while (to_delete_node) {
            Node* next = to_delete_node->next;
            delete to_delete_node;
            to_delete_node = next;
        }
    }
};

int main() {
    AtomicQueue<int> queue;

    std::thread producer([&]() {
        for (int i = 0; i < 10; ++i) {
            queue.push(i);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    });

    std::thread consumer([&]() {
        int data;
        for (int i = 0; i < 10; ++i) {
            while (!queue.pop(data)) {
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            std::cout << "Consumed: " << data << std::endl;
        }
    });
    producer.join();
    consumer.join();
    queue.cleanup();
    return 0;
}