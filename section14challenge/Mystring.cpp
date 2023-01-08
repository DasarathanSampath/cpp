#include <iostream>
#include <cstring>

#include "Mystring.h"

//no org constructor
Mystring::Mystring() 
:str{nullptr}{
    str = new char[1];
    *str = '\0';
    std::cout << "no org constructor is called" << std::endl;
}

//org constructor
Mystring::Mystring(const char *s)
:str{nullptr}{
    if(s==nullptr){
        str = new char[1];
        *str ='\0';
    } else {
        str = new char[strlen(s)+1];
        std::strcpy(str,s);
    }
    std::cout << "org constructor is called" << std::endl;
}

//copy constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
    str = new char[strlen(source.str)+1];
    std::strcpy(str, source.str);
    std::cout << "copy constructor is called" << std::endl;
}

//move constructor
Mystring::Mystring(Mystring &&source)
:str(source.str){
    source.str = nullptr;
    std::cout << "Move constructor is called" << std::endl;
}

//desrcutor
Mystring::~Mystring(){
    delete [] str;
}

//overload assignment copy
Mystring &Mystring::operator=(const Mystring &rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;

    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this->str, rhs.str);
    std::cout << "copy assignment" << std::endl;
    return *this;
}

//overload assignment move
Mystring &Mystring::operator=(Mystring &&rhs){
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    std::cout << "Move assignment" << std::endl;
    return *this;
}

//negative to lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[strlen(str)+1];
    strcpy(buff, str);
    for(size_t i=0; i<strlen(buff); i++){
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff; 
    return temp;
}

//methods
void Mystring::display() const{
    std::cout << str << std::endl;
}

const char *Mystring::get_str() const {
    return str;
}

//== to compare two strings
bool Mystring::operator==(const Mystring &rhs) const {
    std::cout << "double equal compare strings is called" << std::endl;
    return (std::strcmp(str, rhs.str) == 0);
}

//!= to compare two strings
bool Mystring::operator!=(const Mystring &rhs) const {
    std::cout << "not equal compare strings is called" << std::endl;
    return !(std::strcmp(str, rhs.str) == 0);
}

//< to compare two strings
bool Mystring::operator<(const Mystring &rhs) const {
    std::cout << "lessthan compare strings is called" << std::endl;
    return (std::strcmp(str, rhs.str) < 0);
}

//> to compare two strings
bool Mystring::operator>(const Mystring &rhs) const {
    std::cout << "greaterthan compare strings is called" << std::endl;
    return (std::strcmp(str, rhs.str) > 0);
}