#include <iostream>
#include "Movie.h"

using namespace std;
//Copy constructor
Movie::Movie(const Movie &source)
    :Movie{source.name, source.rating, source.watched}{
}
//Destructor
Movie::~Movie(){
}

//arg constructor
Movie::Movie(string name, string rating, int watched)
    :name(name), rating(rating), watched(watched){

}

void Movie::display() const {
    cout << name << ", " << rating << ", " << watched << endl;
}