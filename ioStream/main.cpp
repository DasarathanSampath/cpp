#include <iostream>
#include <iomanip>

//using namespace std;

int main(){
    std::cout << std::boolalpha;
    std::cout << (10==10) << std::endl;
    std::cout << (10==20) << std::endl;
    std::cout << std::noboolalpha;
    std::cout << (10==10) << std::endl;
    std::cout << (10==20) << std::endl;
    std::cout.setf (std::ios::boolalpha);
    std::cout << (10==10) << std::endl;
    std::cout << (10==20) << std::endl;
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << (10==10) << std::endl;
    std::cout << (10==20) << std::endl;    

    int num {255};
    std::cout << num << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::oct << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::oct << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::uppercase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::oct << num << std::endl;
    std::cout << std::hex << num << std::endl;

    int num1 {255};
    int num2 {-255};
    std::cout << std::noshowbase << std::showpos << std::dec;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
}

