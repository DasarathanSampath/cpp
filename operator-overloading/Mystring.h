#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    private:
        char *str;                          //pointer to a c-ctyle string
    
    public:
        Mystring();                         //no args constructor
        Mystring(const char *s);            //Oveloaded constructor
        Mystring(const Mystring &source);   //copy constructor
        ~Mystring();                        //Desructor
        void display() const;
        int get_length() const;             //getters
        const char *get_str() const;
};

#endif // _MYSTRING_H_