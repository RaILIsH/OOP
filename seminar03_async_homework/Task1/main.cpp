#include <iostream>
#include <fstream>
#include <thread>
#include <string>
#include <mutex>
#include <condition_variable>
#include <cctype>

std::string globalString; 
std::mutex mtx;
std::condition_variable cv;

void readFromFile() {
    std::ifstream file("invisible_man.txt");
    std::string line;

    while (std::getline(file, line)) {
        if (!line.empty()) {
            std::unique_lock<std::mutex> lock(mtx);
            globalString = line;
            cv.notify_one();
            cv.wait(lock);
        }
    }
}

void printUpperCase() {
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return !globalString.empty(); });
        for (char &c : globalString) {
            c = std::toupper(c);
        }
        std::cout << globalString << std::endl;
        globalString.clear();
        cv.notify_one();
    }
}

int main() {
    std::thread reader(readFromFile);
    std::thread printer(printUpperCase);
    reader.join();
    printer.join();
    return 0;
}