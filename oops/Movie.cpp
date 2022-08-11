#include<iostream>
#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    :name(name), rating(rating), watched(watched){
}

Movie::~Movie(){
}

void Movie::display() const {
    std::cout << name << "; " << rating << "; " << watched << ";" << std::endl;
}