#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    private:
        char *str;
    public:
        Mystring(); //no arg constructor
        Mystring(const char *s); // arg constructor
        Mystring(const Mystring &source); //copy constructor
        Mystring(Mystring &&source); //copy constructor
        ~Mystring(); //desructor

        Mystring &operator=(const Mystring &rhs); //copy assignment
        Mystring &operator=(Mystring &&rhs); //move assignment

        void display() const; // methods
        int get_length() const;
        const char *get_str() const;
};

#endif