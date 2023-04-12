#include <iostream>
#include <vector>

struct X{
    X() {std::cout << "constructor is called" << std::endl;} 
    X(const X&) {std::cout << "copy constructor is called" << std::endl;}
    ~X(){std::cout << "destructor is called" << std::endl;}
};


int main(int argc, char **argv) {
    std::cout << "define lcoal variable" << std::endl;
    X x;
    std::cout << std::endl;

    std::vector<X> vec;

    std::cout << "save in vector" << std::endl;
    
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);
    vec.push_back(x);

    std::cout << std::endl;
    
    return 0;
}