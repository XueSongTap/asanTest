#include <iostream>
#include <vector>

#include <string>
#include <thread>

std::vector<int> Test;


void PUSH(){
    for (int i = 0;  i < 5000; ++i) {
        Test.push_back(2345);
    }
}



int main(){
    std::vector<std::thread> threads_;
    // use reserve to prevent from core dump
    Test.reserve(400000);
    for (int i = 0; i < 10; ++ i) {
        threads_.emplace_back(std::thread(PUSH));
    }
    for (std::thread& t: threads_) {
        if (t.joinable()) {
            t.join();
        }
    }

    std::cout << "size: " << Test.size() << std::endl;
    for (int i = 0; i< 5000; ++ i) {
        if (Test[i] != 2345) {
            std::cout << "error: " << i << " data:" << Test[i] << std::endl;
        }
    }

    
    return 0;
}
