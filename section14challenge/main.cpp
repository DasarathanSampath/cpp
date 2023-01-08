#include <iostream>

#include "Mystring.h"

int main(){
    Mystring a{"Hello World"};
    Mystring b = -a;
    a.display();
    b.display();
    Mystring c;
    c = "Hello World";
    std::cout << std::boolalpha; 
    std::cout << (a == b) << std::endl;
    std::cout << (a == c) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a != c) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;
    return 0;
}