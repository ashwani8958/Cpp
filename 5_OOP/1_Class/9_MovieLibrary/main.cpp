//
//  main.cpp
//  5_OOP
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Movies.hpp"

void incrementWatched(Movies &movies, string name)
{
    if(movies.incrementWatched(name))
        cout << name << " watch incremented" <<  endl;
    else
        cout << name << " not found" <<  endl;
}

void addMovie(Movies &movies, string name, string rating, int watched)
{
    if(movies.addMovies(name, rating, watched))
        cout << name << " added" << endl;
    else
        cout << name << " already exists" <<  endl;
}


int main()
{
    Movies myMovies;
    
    myMovies.display();
    
    addMovie(myMovies, "Big", "PG-13",2);                           // OK
    addMovie(myMovies,"Star Wars", "PG",5);                         // OK
    addMovie(myMovies,"Cinderella", "PG",7);                        // OK
    
    myMovies.display();                                             // Big, Star Wars, Cinderella
    
    addMovie(myMovies,"Cinderella", "PG",7);                        // Already exists
    addMovie(myMovies,"Ice Age", "PG",12);                          // OK
    
    myMovies.display();                                             // Big, Star Wars, Cinderella, Ice Age
    
    incrementWatched(myMovies,"Big");                               // OK
    incrementWatched(myMovies,"Ice Age");                           // OK
    
    myMovies.display();                                             // Big and Ice Age watched count incremented by 1
    
    incrementWatched(myMovies,"XXX");                               // XXX not found
    return 0;
}
