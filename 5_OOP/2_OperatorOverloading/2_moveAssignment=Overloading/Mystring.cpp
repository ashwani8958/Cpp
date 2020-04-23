//
//  Mystring.cpp
//  5_OOP
//
//  Created by Ashwani on 23/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

//Getter method
unsigned Mystring::getLength()const {return static_cast<unsigned>(strlen(str));}
const char *Mystring::getStr()const {return str;}

//Constructor
Mystring::Mystring()
:str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//overloader constructor
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
        str = new char[strlen(source)+1];
        strcpy(str, source);
    }
}

//Destructor
Mystring::~Mystring()
{
    if (str == nullptr)
    {
        std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
    }
    else
    {
         std::cout << "Calling destructor for Mystring : " << str << std::endl;
    }
    delete [ ] str;
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
:Mystring(source.str)
{
    cout << "Copy constructor used" << endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source)
:str{source.str}
{
    source.str = nullptr;
    cout << "Move constructor is used" << endl;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    std::cout << "Using copy assignment" << std::endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str, rhs.str);
    return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs)
{
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Display
void Mystring::display() const
{
    std::cout << str << " : " << getLength() << std::endl;
}
