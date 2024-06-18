#include <iostream>
#include <fstream>
#include <thread>
#include <string>
#include <mutex>
#include <cctype>

std::string globalString;
std::mutex mtx;

void readFromFile() {
    std::ifstream file("invisible_man.txt");
    std::string line;

    while (std::getline(file, line)) {
        if (!line.empty()) {
            while (!globalString.empty()) {}
            std::lock_guard<std::mutex> lock(mtx);
            globalString = line;
        }
    }
}

void printUpperCase() {
    while (true) {
        if (!globalString.empty()) {
            std::lock_guard<std::mutex> lock(mtx);
            for (char &c : globalString) {
                c = std::toupper(c);
            }
            std::cout << globalString << std::endl;
            globalString.clear();
        }
    }
}

int main() {
    std::thread reader(readFromFile);
    std::thread printer(printUpperCase);

    reader.join();
    printer.join();

    return 0;
}