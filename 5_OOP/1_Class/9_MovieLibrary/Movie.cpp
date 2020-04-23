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

//Constructor
Movie::Movie (string movieName, string movieRating, int movieWatched)
:name{movieName}, rating{movieRating}, watched{movieWatched}
{
   //Empty function body because attribute is already assigned
}

//copy constructor
Movie::Movie(const Movie &source)
:Movie(source.name, source.rating, source.watched)
{
    //Empty
}

//Destructor
Movie::~Movie()
{
    //Empty
}


//Display
void Movie::display()const
{
    cout << name << "," << rating << "," << watched << endl;
}
