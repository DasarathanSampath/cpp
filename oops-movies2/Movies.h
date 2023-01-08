#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"

#include <string>
#include <vector>

using namespace std;

class Movies {
    private:
        vector<Movie> movies;
    public:        
        Movies(); //Copy constructor
        ~Movies(); //Destructor

        bool add_movie(string name, string rating, int watched);
        bool increment_watched(string name);
        void display() const;
};

#endif