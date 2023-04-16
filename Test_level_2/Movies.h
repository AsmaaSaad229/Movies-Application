#pragma once
#include<vector>
#include"Movie.h"

class Movies
{
	friend ostream& operator<<(ostream& os, const Movies& movies);
private:
	vector<Movie> movies{};
public:
	
	Movies();
	~Movies();

	bool add_movie(string new_name, string new_rating, int new_watched);
	bool increment_watched(string new_name);
};

