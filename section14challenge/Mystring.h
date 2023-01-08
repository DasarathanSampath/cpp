#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {

    private:
        char *str;
    public:
        Mystring(); //no arg constructor
        Mystring(const char *s); //org constructor
        Mystring(const Mystring &source); //copy constructor
        Mystring(Mystring &&source); //move constructor
        ~Mystring(); //desructor

        Mystring &operator=(const Mystring &rhs); //copy assignment
        Mystring &operator=(Mystring &&rhs); //move assignment
        
        Mystring operator-() const; //Negative operator for lowercase
        bool operator==(const Mystring &rhs) const; //== to compare strings
        bool operator!=(const Mystring &rhs) const; //== to compare strings
        bool operator<(const Mystring &rhs) const; //== to compare strings
        bool operator>(const Mystring &rhs) const; //== to compare strings
        
        void display() const; //Methods
        const char *get_str() const;
};

#endif