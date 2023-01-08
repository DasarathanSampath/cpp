#include <iostream>

using namespace std;

class Shallow {
    private:
        int *data;
    public:
        void set_data_value(int d){*data = d;};
        int get_data_value(){return *data;};
        
        Shallow(int d); //arg constructor
        Shallow(const Shallow &source);//copy constructor
        ~Shallow();//desructor        
};



/* Shallow::Shallow(const Shallow &source)
    :data(source.data) {
        cout << "Shallow Copy constructor called." << endl;
} */

/* //the below converts the shallow copy to deep copy
Shallow::Shallow(const Shallow &source)
{
    data = new int; //allocate storage
    *data = *source.data;
    cout << "Deep Copy constructor called." << endl;
} */

//Deep copy with deligation
Shallow::Shallow(const Shallow &source)
:Shallow(*source.data){
    cout << "Deep Copy constructor called." << endl;
}

Shallow::~Shallow(){
    delete data;
    cout << "Desructor is called." << endl;
}

Shallow::Shallow(int d) {
    data = new int;
    *data = d;
}

void display_shallow(Shallow s){
    std::cout << "Display Shallow: " << s.get_data_value() << endl;
}

int main() {
    Shallow obj1{100};
    cout << "obj1.data: " << obj1.get_data_value() << endl;
    //cout << "obj1.data.address: "<< &obj1.get_data_value() << endl;
    display_shallow(obj1);

    obj1.set_data_value(1000);
    display_shallow(obj1);
    Shallow obj2{obj1};
    display_shallow(obj2);
    return 0;
}