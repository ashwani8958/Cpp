//
//  Movie.hpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <iostream>
#include <vector>

using namespace std;

class Movie
{
private:
    string name;                                // For the name of the movie
    string rating;                              // For movie rating G,PG, PG-13, R
    int watched;                                // Number of times movie being watched
    
public:
    //Getter Methods
    string getMovieName()const;
    string getMovieRating()const;
    int getMovieWatched()const;
    
    //Setter Methods
    void setMovieName(const string name);
    void setMovieRating(const string rating);
    void setMovieWatched(const int watched);
    
    //Simply increment the watched attribute by 1
    void incrementWatched();
    
    //Constructor
    Movie (string moiveName, string moiveRating, int movieWatched);
    
    //Copy Constructor
    Movie(const Movie &source);
    
    //Destructor
    ~Movie();
    
    //Display method
    void display() const;
};
#endif /* Movie_hpp */
