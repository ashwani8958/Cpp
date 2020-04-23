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
#include <vector>
using namespace std;

class Mystring
{
private:
    char *str;
public:
    
    //Getter Method
    unsigned getLength() const;
    const char *getStr() const;
    
    //Constructor
    Mystring();
    Mystring(const char *source);
    
    //Copy constructor
    Mystring(const Mystring &source);
    
    //Move constructor
    Mystring(Mystring &&source);
    
    //Destructor
    ~Mystring();
    
    //Copy assignment
    Mystring &operator=(const Mystring &rhs);
    
    //Move assignment
    Mystring &operator=(Mystring &&rhs);
    
    //Display
    void display() const;
    
};

#endif /* Mystring_hpp */
