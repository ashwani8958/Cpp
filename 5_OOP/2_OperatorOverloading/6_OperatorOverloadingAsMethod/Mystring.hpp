//
//  Mystring.hpp
//  5_OOP
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
    friend ostream &operator<<(ostream &os, const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &rhs);
    
private:
    char *str;
    
public:
    
    //Getter Methods
    unsigned getLength() const;
    char *getstr() const;
    
    //Display
    void display() const;
    
    //Constructors
    Mystring();
    Mystring(const char *str);
    
    //Copy constructors
    Mystring(const Mystring &source);
    
    //Move constructor
    Mystring(Mystring &&source);
    
    //Destructor
    ~Mystring();
    
    //copy assignment
    Mystring & operator=(const Mystring &rhs);
    
    //Move assignment
    Mystring & operator=(Mystring &&rhs);
    
    //Overloaded operator member method
      Mystring operator-() const;                               // make lowercase
      Mystring operator+(const Mystring &rhs) const;            // concatenate
      bool operator==(const Mystring &rhs) const;               // equals
      bool operator!=(const Mystring &rhs) const;               // not equals
      bool operator<(const Mystring &rhs) const;                // less than
      bool operator>(const Mystring &rhs) const;                // greater than
      Mystring &operator+=(const Mystring &rhs);                // s1 += s2;  concat and assign
      Mystring operator*(int n) const;                          // s1 = s2 * 3;  repeat s2 n times
      Mystring &operator*=(int n);                              // s1 *= 3;   s1 = s1 * 3;
      Mystring &operator++();                                   // pre-increment    ++s1;
      Mystring operator++(int);                                 // post-increment   s1++;
    
};

#endif /* Mystring_hpp */
