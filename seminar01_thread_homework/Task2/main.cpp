#include <iostream>
#include <thread>
#include <chrono>

void threadFunction(int id, int n) {
    std::cout << "Thread #" << id << " started." << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    if (id < n - 1) {
        std::thread nextThread(threadFunction, id + 1, n);
        nextThread.join();
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    std::cout << "Thread #" << id << " finished." << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    std::thread firstThread(threadFunction, 1, n);
    firstThread.join();

    return 0;
}
