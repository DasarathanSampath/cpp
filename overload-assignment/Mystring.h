#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
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
        Mystring operator-() const; //negative assignment to string lower

        void display() const; // methods
        int get_length() const;
        const char *get_str() const;
};

#endif