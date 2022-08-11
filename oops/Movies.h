#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>

#include "Movie.h"

class Movies {
    private:
        std::vector<Movie> movies;
    public:
        Movies();
        ~Movies();
        bool add_movie(std::string name, std::string rating, int watched);
        void display() const;
};

#endif
