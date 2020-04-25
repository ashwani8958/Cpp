//
//  Movies.hpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Movies_hpp
#define Movies_hpp

#include "Movie.hpp"

class Movies
{
private:
    vector<Movie> movies;
    
public:
    bool addMovies(string movieName, string rating, int watched);
    bool incrementWatched(string movieName);
    void display() const;
};

#endif /* Movies_hpp */
