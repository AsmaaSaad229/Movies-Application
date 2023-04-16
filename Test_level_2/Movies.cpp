#include "Movies.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies:: add_movie(string new_name, string new_rating, int new_watched) {
    for (Movie &movie : movies) {
        if (movie.get_name() == new_name) {
            return false;
        }
    }
    Movie new_movie{ new_name, new_rating, new_watched };
    movies.push_back(new_movie);
    return true;
}

bool Movies::increment_watched(string new_name) {
        for (Movie &movie : movies) {
            if (movie.get_name() == new_name) { 
                movie.incremented_watched();
                return true;
            }
        }
        return false;
    }

ostream& operator<<(ostream& os, const Movies& movies) {
    if (movies.movies.size() == 0 ) {
        os << "Sorry, no movies to display"<<endl;
    }
    else {
        os << "==================" << endl;
        for (const Movie& movie : movies.movies) {
            os << movie << endl;
        }
    }
    os << "=================="<<endl;
    return os;
}