#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char **argv) {

    int *ptr2;
    int x = 100;
    //int *ptr3;
    cout << "x: " << x << endl;
    cout << "&x: "<< &x << endl;

    ptr2 = &x;
    cout << "ptr2-Pointer pointing to the Value of address: " << ptr2 << endl;
    cout << "&ptr2-Address of the pointer: " << &ptr2 << endl;
    cout << "*ptr2-Value stored in the address the pointer pointing to: " << *ptr2 << endl;
    cout << "*ptr2-Value stored in the address the pointer pointing to: " << *ptr2 << endl;

    int *ptr3 = &x;
    cout << "ptr3-Pointer pointing to the Value of address: " << ptr3 << endl;
    cout << "&ptr3-Address of the pointer: " << &ptr3 << endl;
    cout << "*ptr3-Value stored in the address the pointer pointing to: " << *ptr3 << endl;

    //The below creates a paointer and initialize with initial values
    //This creates a new memory on the heap and remains on the heep even after the function ends
    int *ptr4;
    int init_value = 0;
    ptr4 = new int;
    *ptr4 = init_value;
    cout << "ptr4: " << ptr4 << endl;
    cout << "&ptr4: " << &ptr4 << endl;
    cout << "*ptr4: " << *ptr4 << endl;

    cout << "x: " << x << endl;
    cout << "&x: "<< &x << endl;
    
    /* int a{100};
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
    cout << "*a_ptr: " << *a_ptr << endl; 
    cout << "&a_ptr: " << &a_ptr << endl; 
    cout << endl;
    a_ptr = {nullptr};  
    cout << "a_ptr{nullptr}: " << a_ptr << endl;
    cout << "*a_ptr{nullptr}: " << (void*)a_ptr << endl;
    cout << "&a_ptr: " << &a_ptr << endl;
    cout << endl;
    a_ptr = &a;
    cout << "a_ptr: " << a_ptr << endl;
    cout << "*a_ptr: " << *a_ptr << endl;
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
    cout << endl; */

}