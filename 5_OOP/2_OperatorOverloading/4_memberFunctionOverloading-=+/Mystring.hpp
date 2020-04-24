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
#include <vector>

using namespace std;

class Mystring
{
    //Make lowercase
    friend Mystring operator-(const Mystring &obj);
    
    //concatenate Method
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    
    //compare to object
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    
private:
    char *str;
    
public:
    
    //Getter method
    unsigned getLength()const{return static_cast<unsigned>(strlen(str));}
    char *getStr()const{return str;}
    
    //Constructor
    Mystring();
    Mystring(const char *source);
    
    //Copy Constructor
    Mystring(const Mystring &source);
    
    //Move Constructor
    Mystring(Mystring &&source);
    
    //Destructor
    ~Mystring();
    
    //copy assignment
    Mystring &operator=(const Mystring &rhs);
    
    //Move assignment
    Mystring &operator=(Mystring &&rhs);
        
    //Display
    void display()const;
};

#endif /* Mystring_hpp */
