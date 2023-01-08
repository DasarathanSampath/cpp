#include <iostream>
#include <string>

#include "Movies.h"

void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
    if(movies.add_movie(name, rating, watched)){
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
}

int main(){
    Movies my_movies;
    my_movies.display();

    add_movie(my_movies, "Bigil", "PG-13", 12);
    add_movie(my_movies, "Beast", "U/A", 7);

    my_movies.display();
}

/* #include "Movies.h"

void add_movies(Movies &movies, std::string name, std::string rating, int watched);


void add_movies(Movies &movies, std::string name, std::string rating, int watched){
    if(movies.add_movies(name, rating, watched)){
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" << std::endl;
    }
} */

/* int main() {

    Movies my_movies;

    my_movies.display();

    add_movies(my_movies, "Bigil", "PG-13", 20);
    add_movies(my_movies, "Vikram", "PG", 7);
    add_movies(my_movies, "Ponniyin Selvan", "U/A", 5);

    my_movies.display();

    return 0;
} */
