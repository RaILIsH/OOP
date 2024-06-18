#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void threadFunction(int i) {
    std::cout << "Thread #" << i << " started." << std::endl;
    
    std::this_thread::sleep_for(std::chrono::seconds(i));
    
    std::cout << "Thread #" << i << " finished." << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    std::vector <std::thread> threads;
    for (int i = 0; i < n; i++) {
        threads.push_back(std::thread(threadFunction, i));
    }
    for (int i = 0; i < n; i++) {
        threads[i].join();
    }
    return 0;
}
