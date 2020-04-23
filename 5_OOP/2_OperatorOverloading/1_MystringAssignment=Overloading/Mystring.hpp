//
//  Mystring.hpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <iostream>
using namespace std;

class Mystring
{
private:
    //Pointer to a char[] that hold a c-style string
    char *str;
    
public:
    //Getter methods
    unsigned getLength()const;
    const char* getStr()const;
    
    //Constructor
    Mystring( );
    Mystring (const char *source);     //Overloaded Constructor
    
    //Copy Constructor
    Mystring(const Mystring &source);
    
    //Destructor
    ~Mystring();
    
    //Copy assignment = overloading
    Mystring &operator=(const Mystring &rhs);
    
    //Display
    void display() const;
};

#endif /* Mystring_hpp */
