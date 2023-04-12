#include <unordered_map>
#include <map>
#include <future>
#include <string>
#include <vector>
#include <thread>
#include <iostream>
#include <unistd.h>
#include <sys/syscall.h>

std::unordered_map<int, int> test_map;


void write_map(){
    while (true){
        for (int i = 0; i < 10000; ++ i) {
            test_map[i] = i;
        }
    }
}

void read_map(){
    while (true) {
        for (int i = 0; i < 10000; ++ i) {
            if (test_map.find(i) != test_map.end()) {
                int a = test_map[i];
            }
        }
    }
}

int main(){
    std::vector<std::thread> threads_;

    for (int i = 0; i < 1; ++ i) {
        threads_.emplace_back(std::thread(write_map));
    }
    for (int i = 10; i < 20; ++ i) {
        threads_.emplace_back(std::thread(read_map));
    }

    for (std::thread&t: threads_) {
        if (t.joinable()) {
            t.join();
        }
    }

    return 0;
}