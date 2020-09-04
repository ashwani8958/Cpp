//
//  Mystring.cpp
//  5_OOP
//
//  Created by Ashwani on 24/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

//No arg constructor
Mystring::Mystring()
:str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//constructor
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

//Copy constructor
Mystring::Mystring (const Mystring &source)
:Mystring(source.str)
{
    cout << "Copy constructor used" << endl;
}

//Move constructor
Mystring::Mystring(Mystring &&source)
:str{nullptr}
{
    //Stealing the pointer
    str = source.str;
    delete [] source.str;
    cout << "Move constructor used" << endl;
}

//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//copy Assignment
Mystring & Mystring::operator=(const Mystring &rhs)
{
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}
    
//Move Assignment
Mystring & Mystring::operator=(Mystring &&rhs)
{
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Convert source string into lowercase
Mystring Mystring::operator-() const
{
    char *buffer = new char[strlen(this->str) + 1];
    strcpy(buffer, this->str);
    
    for(size_t i = 0; i < strlen(buffer); i++)
    {
        buffer[i] = tolower(buffer[i]);
    }
    Mystring temp{buffer};
    return temp;
}

//Equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(this->str, rhs.str) == 0);
}

//Concatentate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buffer = new char[strlen(this->str) + strlen(rhs.str) + 1];
    strcpy(buffer, this->str);
    strcat(buffer, rhs.str);
    Mystring temp {buffer};
    delete [] buffer;
    return temp;
}

//Display
void Mystring::display() const
{
    cout << str << " : " << getLength() << endl;
}
