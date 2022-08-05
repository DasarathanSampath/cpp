#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char **argv) {
    int a{100};
    int b{};
    cout << endl;
    cout << "int a is: " << a << endl;
    cout << "int b is: " << b << endl;
    cout << "&a is: " << &a << endl;
    cout << "&b is: " << &b << endl;
    cout << endl;
    b = a;
    cout << "After b = a" << endl;
    cout << "b is: " << b << endl;
    cout << "&b is: " << &b << endl;
    cout << endl;
    int *a_ptr;
    cout << "a_ptr: " << a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << endl;
    a_ptr = {nullptr};
    cout << "a_ptr{nullptr}: " << a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << endl;
    a_ptr = &a;
    cout << "a_ptr: " << a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << endl;

    *a_ptr = 999;
    cout << "a_ptr: " << a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << "int a is: " << a << endl;
    cout << "&a is: " << &a << endl;
    cout << "int b is: " << b << endl;    
    cout << "&b is: " << &b << endl;
    cout << endl;

    b = 999;
    cout << "a_ptr: " << a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << "int a is: " << a << endl;
    cout << "&a is: " << &a << endl;
    cout << "int b is: " << b << endl;    
    cout << "&b is: " << &b << endl;
    cout << endl;

}