#include <iostream>

#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies &movies, string name){
    if(movies.increment_watched(name)){
        cout << name << "watch incremented" << endl;
    } else {
        cout << name << "not found" << endl;
    }
}

void add_movie(Movies &movies, string name, string rating, int watched){
    if(movies.add_movie(name, rating, watched)){
        cout << name << " added" << endl;
    } else {
        cout << name << " already exist" <<endl;
    }
}

int main() {
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "Bigil", "PG-1", 10);
    add_movie(my_movies, "Vikram", "13+", 25);
    add_movie(my_movies, "Kantara", "PG", 6);
    my_movies.display();

    add_movie(my_movies,"Cinderella", "PG",7);            // Already exists
    add_movie(my_movies,"Ice Age", "PG",12);              // OK
 
    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    increment_watched(my_movies,"Bigil");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
    my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");     // XXX not found

    return 0;
}