#include<iostream>

#include "Mystring.h"

using namespace std;

int main(){
    Mystring a {"HELLO"};
    a.display();
    a = -a;
    a.display();
    Mystring b {"WORLD"};
    b.display();
    Mystring c {a};
    cout << (c==a) << endl;
    cout << (b==a) << endl;

    Mystring d = a + "world";
    d.display();
    return 0;
}