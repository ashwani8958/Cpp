//
//  Mystring.cpp
//  5_OOP
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

//Friends  function
ostream & operator<<(ostream &os, const Mystring &obj)
{
    os << obj.str;
    return os;
}
istream & operator>>(istream &is, Mystring &obj)
{
    char *buff = new char[1000];
    is >> buff;
    obj = Mystring{buff};
    delete [] buff;
    return is;
}

//Getter method
unsigned Mystring::getLength() const
{
    return static_cast<unsigned>(strlen(this->str));
}
char * Mystring::getstr() const
{
    return this->str;
}

//Display
void Mystring::display() const
{
    cout << str << " : " << getLength() << endl;
}

//No Arg Constructor
Mystring::Mystring()
:str(nullptr)
{
    str = new char[1];
    *str = '\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *uStr)
:str(nullptr)
{
    if(uStr == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(uStr)+1];
        strcpy(str, uStr);
    }
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
:Mystring(source.str)
{
    
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
:str(source.str)
{
    source.str = nullptr;
}

//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//Copy Assignment
Mystring & Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;
    delete [] this->str;
    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move Assignment
Mystring & Mystring::operator=(Mystring &&rhs)
{
    if(this == &rhs)
        return *this;
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Overloaded operator member method
// Make lowercase
Mystring Mystring::operator-() const
{
    char *buffer = new char[strlen(this->str) + 1];
    strcpy(buffer, this->str);
    for(size_t i = 0; i < strlen(buffer); i++)
        buffer[i] = tolower(buffer[i]);
    Mystring temp{buffer};
    delete [] buffer;
    return temp;
}

// Concatentate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *buffer = new char[strlen(this->str) + strlen(rhs.str) + 1];
    strcpy(buffer, this->str);
    strcat(buffer, rhs.str);
    Mystring temp{buffer};
    delete [] buffer;
    return temp;
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const
{
    return(strcmp(this->str, rhs.str) == 0);
}

// Not equals
bool Mystring::operator!=(const Mystring &rhs) const
{
    return !(strcmp(this->str, rhs.str) == 0);
}

// Less than
bool Mystring::operator<(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) < 0);
}

// Greater than
bool Mystring::operator>(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) > 0);
}

// Concat and assign
Mystring & Mystring::operator+=(const Mystring &rhs)
{
    strcat(this->str, rhs.str);
    return *this;
}

// repeat
Mystring Mystring::operator*(int n) const
{
    Mystring temp;
    for (int i=1; i<= n; i++)
        temp = temp + *this;        //concat
    return temp;
    /*
    size_t buff_size = std::strlen(str) * n + 1;
    char *buff = new char[buff_size];
    strcpy(buff, "");
    for (int i =1; i <=n; i++)
        strcat(buff, str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
    */
}

// repeat and assign
Mystring &Mystring::operator*=(int n)
{
    *this = *this * n;
    return *this;
}


// Pre-increment - make the string upper-case
Mystring &Mystring::operator++()
{  // pre-increment
    for (size_t i=0; i<strlen(str); i++)
        str[i] = toupper(str[i]);
   return *this;
}

//Post-increment - make the string upper-case
Mystring Mystring::operator++(int)
{ // post-increment
   Mystring temp (*this);           // make a copy
   operator++();                    // call pre-increment - make sure you call preincrement!
   return temp;                     // return the old value
}
