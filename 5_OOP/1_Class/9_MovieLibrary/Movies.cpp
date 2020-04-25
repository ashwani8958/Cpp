//
//  Movies.cpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Movie.hpp"
#include "Movies.hpp"

bool Movies::addMovies(string movieName, string rating, int watched)
{
    for(const Movie &movie:movies)
    {
        if(movie.getMovieName() == movieName)
            return false;
    }
    
    Movie temp {movieName, rating, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::incrementWatched(string movieName)
{
    for(Movie &movie:movies)
    {
        if(movie.getMovieName() == movieName)
        {
            movie.incrementWatched();
            return true;
        }
    }
    return false;
    
}

void Movies::display() const
{
    if(movies.size() == 0)
        cout << "No movie to display" << endl;
    else
    {
        cout << "\n===================================" << endl;
        for (const auto &movie: movies)
            movie.display();
        cout << "\n===================================" << endl;
    }
}
