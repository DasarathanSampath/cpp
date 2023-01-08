#include <iostream>
#include "Movies.h"

using namespace std;
//Copy constructor
Movies::Movies(){
}
//Destructor
Movies::~Movies(){    
}

bool Movies::add_movie(string name, string rating, int watched){
    for(const Movie &movie: movies){
        if(movie.get_name() == name){
            return false;
        }
    }
    Movie temp{ name, rating, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(string name){
    for(Movie &movie: movies){
        if(movie.get_name() == name){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const{
    if(movies.size() == 0){
        cout << "Sorry there are no movies." << endl;
    } else {
        cout << "\n-------------------------"<< endl;
        for(const auto &movie: movies){
            movie.display();
            /* cout << "Name: " << movie.name << endl;
            cout << "Rating: " << movie.rating << endl;
            cout << "Watched: " << movie.watched << endl; */
        }
        cout << "\n-------------------------" << endl;
    }
}