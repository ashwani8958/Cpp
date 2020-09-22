//
//  Mystring.hpp
//  ToBeDeleted
//
//  Created by Ashwani on 18/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <iostream>
#include <string>
using namespace std;

class Mystring
{
private:
    static constexpr const char *defName = "None";
    static constexpr long int length = 4;
    
protected:
    char *str;
    long int Stringlen;
    
public:
    //Gettter method
    const char *getStr() const;
    const long int getLen() const;
    
    //Constructor
    Mystring();
    Mystring(const char *str);
    
    //Destructor
    ~Mystring();
    
    //Copy constructor
    Mystring(const Mystring &source);
    
    //Move constructor
    Mystring(Mystring &&source);
    
    //Copy assignment
    Mystring &operator=(const Mystring &rhs);
    
    //Move assignment
    Mystring &operator=(Mystring &&rhs);
    
    //Operator overloading
    void operator-();
    
    Mystring operator+(Mystring &rhs);
    
    void display() const;
    
};

class Mystring2:public Mystring
{
    int a;
};

class Team
{
    string name;
    
public:
    Team(const string name);
};

#endif /* Mystring_hpp */
