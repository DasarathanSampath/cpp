#include<iostream>

#include "Mystring.h"

using namespace std;

int main(){
    Mystring a {"Hello"};
    Mystring b;
    b = a;
    a.display();
    b.display();
    b = "This is a test";
    a.display();
    b.display();
    a = Mystring{"Bonjour"};
    a.display();
    a = "Hai! you are there";
    a.display();
     
    Mystring c = -a;
    c.display();

    return 0;
}