#include <iostream>
#include <vector>

#include <string>
#include <thread>

std::vector<int> Test;


void PUSH(){
    for (int i = 0;  i < 10000; ++i) {
        Test.push_back(i);
    }
}

void READ(){
    for (int i = 0;  i < 10000; ++i) {
        for (auto t: Test) {

        }
    }
}

int main(){
    std::vector<std::thread> threads_;

    threads_.emplace_back(std::thread(PUSH));
    threads_.emplace_back(std::thread(READ));
    for (std::thread& t: threads_) {
        if (t.joinable()) {
            t.join();
        }
    }
    return 0;
}
