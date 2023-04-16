//implementation اللى هيكون فيه ال
#include "Movie.h"

Movie::Movie(string name, string rating, int watched) :name{ name }, rating{ rating }, watched{ watched } {

}

Movie::~Movie() {

}

ostream& operator<< (ostream& os,const Movie& movie) {
    os << movie.get_name() << " , " << movie.get_rating() << " , " << movie.get_watched();
    return os;
}