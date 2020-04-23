//
//  Movie.cpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Movie.hpp"

//Getter methods
string Movie::getMovieName() const{return name;}
string Movie::getMovieRating()const{return rating;}
int Movie::getMovieWatched()const{return watched;}

//Setter methods
void Movie::setMovieName(const string name){this->name = name;}
void Movie::setMovieRating(const string rating){this->rating = rating;}
void Movie::setMovieWatched(const int watched){this->watched = watched;}

//Simply increment the watched attribute by 1
void Movie::increment_watched() { ++watched; }
