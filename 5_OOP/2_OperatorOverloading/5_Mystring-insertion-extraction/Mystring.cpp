//
//  Mystring.cpp
//  5_OOP
//
//  Created by Ashwani on 24/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"


//Non member function;
ostream & operator<<(ostream &os, const Mystring &rhs)
{
    os << rhs.str;
    return os;
}

istream & operator>>(istream &is, Mystring &rhs)
{
    char *buffer = new char[1000];
    is >> buffer;
    strcpy(rhs.str, buffer);
    return is;
}

//No arg constructor
Mystring::Mystring()
:str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *source)
:str{nullptr}
{
    if(source == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(source) + 1];
        strcpy(this->str, source);
    }
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
:Mystring(source.str)
{
    cout << "copy constructor used" << endl;
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
:str{source.str}
{
    source.str = nullptr;
    //cout << "Move constructor used" << endl;
}

//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//Copy constructor
Mystring & Mystring::operator=(const Mystring &rhs)
{
    if(this==&rhs)
        return *this;
    
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move constructor
Mystring & Mystring::operator=(Mystring &&rhs)
{
    if(this==&rhs)
        return *this;
       
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const
{
    cout << str << " : " << getLength() << std::endl;
}
