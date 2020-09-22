//
//  Mystring.cpp
//  ToBeDeleted
//
//  Created by Ashwani on 18/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

const long int Mystring::getLen() const
{
    return strlen(this->str);
}

const char* Mystring::getStr() const
{
       return this->str;
}

Mystring::Mystring()
:str(nullptr), Stringlen(length)
{
    str = new char[Stringlen + 1];
    strcpy(str, defName);
}

Mystring::Mystring(const char *source)
:str(nullptr),Stringlen(strlen(source))
{
    if(source == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    
    else
    {
        str = new char[strlen(source) + 1];
        strcpy(str, source);
    }
}

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
    Stringlen = strlen(source.str);
    cout << "Copy constructor used" << endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source)
:str(source.str)
{
    Stringlen = strlen(source.str);
    source.str = nullptr;
    cout << "Move constructor is used" << endl;
}


//Copy assignment
Mystring & Mystring::operator=(const Mystring &rhs)
{
    cout << "In Copy assignment for: " << rhs.str << endl;
    if(this == &rhs )
        return *this;
    delete str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    Stringlen = strlen(rhs.str);
    return *this;
}

//Move assignment
Mystring & Mystring::operator=(Mystring &&rhs)
{
    cout << "In Move assignment for: " << rhs.str << endl;
    if(this == &rhs )
        return *this;
    delete str;
    str = rhs.str;
    Stringlen = strlen(rhs.str);
    rhs.str = nullptr;
    return *this;    
}

void Mystring::display() const
{
    cout << str << endl << "String length: " << Stringlen << endl;
}

//Overloaded operator
void Mystring::operator-()
{
    for(size_t i = 0; i < Stringlen; i++)
    {
        str[i] = tolower(str[i]);
    }
   
    Stringlen =  -Stringlen;
}
    
Mystring Mystring :: operator+(Mystring &rhs)
{
    Mystring temp;
    temp.str = new char[strlen(str) + strlen(rhs.str) + 1];
    temp.Stringlen = strlen(str) + strlen(rhs.str);
    strcpy(temp.str, str);
    strcat(temp.str, rhs.str);
    return temp;
}

Team::Team(const string name)
:name(name)
{
    //
}

