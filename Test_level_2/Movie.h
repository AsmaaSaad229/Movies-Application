#pragma once //garde مرشد
//signatureتوقيع (declaration)اللى هيكون فيه ال(specificationتخصيص)
#include <iostream>
#include <string>

using namespace std;

class Movie
{
	friend ostream& operator<< (ostream& os,const Movie& movie);
private:
	string name{}, rating{};
	int watched{};
public:
	Movie(string name, string rating, int watched);
	
	~Movie();
	
	void set_name(string name) {
		this->name = name;
	}
	string get_name()const {
		return name;
	}
	void set_rating(string rating) {
		this->rating = rating;
	}
	string get_rating()const{
		return rating;
	}
	void set_watched(int watched) {
		this->watched = watched;
	}
	int get_watched() const{
		return watched;
	}
	void incremented_watched() {
		++watched;
	}
};

