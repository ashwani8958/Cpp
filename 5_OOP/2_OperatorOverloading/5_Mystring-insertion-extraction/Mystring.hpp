//
//  Mystring.hpp
//  5_OOP
//
//  Created by Ashwani on 24/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <iostream>
using namespace std;

class Mystring
{
    
    //Non-member function/method
    friend ostream & operator<<(ostream &os, const Mystring &rhs);
    friend istream & operator>>(istream &in, Mystring &rhs);
    
private:
    char *str;

public:
    //Getter Methods
    unsigned getLength() const {return static_cast<unsigned>(strlen(str));}
    char *getStr() const {return str;}
    
    //No arg constructor
    Mystring();
    
    //Overloaded constructor
    Mystring(const char *source);
    
    //Copy Constructor
    Mystring(const Mystring &source);
    
    //Move constructor
    Mystring(Mystring &&source);
    
    //Destructor
    ~Mystring();
    
    //Copy Assignment
    Mystring &operator=(const Mystring &rhs);
    
    //Move Assignment
    Mystring &operator=(Mystring &&rhs);
    
    //Display
    void display()const;
};

#endif /* Mystring_hpp */
