#include<cstring>
#include<iostream>

#include "Mystring.h"

using namespace std;

Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str='\0';
    }

//overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
    }

//copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[strlen(source.str)+1];
        strcpy(str, source.str);
        cout << "Copy constructor is called" << endl;
    }

//move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
        cout << "Move constructor is called" << endl;
    }

//desructor
Mystring::~Mystring(){
    delete [] str;
}

//overload assignment copy
Mystring &Mystring::operator=(const Mystring &rhs){
    cout << "copy assignment" << endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;

    str = new char[strlen(rhs.str)+1];
    strcpy(this->str, rhs.str);
    return *this;
}

//overload assignment Move
Mystring &Mystring::operator=(Mystring &&rhs){
    cout << "Move assignment" << endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//overload negative operator to string lower case
Mystring Mystring::operator-() const{
    cout << "negative assignment" << endl;
    char *buff = new char[strlen(str)+1];
    strcpy(buff, str);
    for(size_t i=0; i<strlen(buff); i++){
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//desplay method
void Mystring::display() const{
    cout << str << ":" << get_length() << endl;
}

//length getter
int Mystring::get_length() const{
    return strlen(str);
}

//String getter
const char *Mystring::get_str() const {
    return str;
}