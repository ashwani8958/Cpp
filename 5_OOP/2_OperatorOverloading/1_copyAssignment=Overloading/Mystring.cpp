//
//  Mystring.cpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

//Getter Method
unsigned Mystring::getLength() const
{
    return static_cast<unsigned>(strlen(str));
}

const char *Mystring::getStr() const
{
    return str;
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
        str = new char [strlen(source) + 1];
        strcpy(str,source);
    }
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}
{
    str = new char[strlen(source.str)+1];
    strcpy(str, source.str);
}

//Destructor
Mystring::~Mystring()
{
    delete [ ] str;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout << "Copy assignment" << std::endl;
    //If object(both object are equal) on the both side of the = is equal then no copy is required
    if(this == &rhs)
        return *this;
    
    //First delete the data of pointed by the "str" on the heap before it point to the new data
    delete [ ]this->str;
    str = new char[strlen(rhs.str)+1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Deplay method
void Mystring::display() const
{
    cout << str << " : " << getLength() << std::endl;
}

