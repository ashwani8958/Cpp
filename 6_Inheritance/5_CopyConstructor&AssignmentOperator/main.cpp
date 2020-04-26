//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
using namespace std;

//Base or parent class
class Base
{
private:
    int value;
    
public:
    //No arg constructor
    Base() : value(0)
    {
        cout << "Base No agrs constructor used." << endl;
    }
    
    //Constructor overloading
    Base(int value) : value(value)
    {
        cout << "Base overloaded constructor used." << endl;
    }
    
    //Destructor
    ~Base()
    {
        cout << "Base Destructor used" << endl;
    }
    
    //Copy Constructor
    Base(const Base &source) :value(source.value)
    {
        cout << "Base Copy constructor is used" << endl;
    }
    
    //Copy Assignment
    Base & operator=(const Base &rhs)
    {
        cout << "Base operator=" << endl;
        if(this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
};

//Child or Derived class
class Derived:public Base
{
private:
    int derivedValue;
    
public:
    
    //No arg constructor
    Derived() : Base(), derivedValue(0)
    {
        cout << "Derived No agrs constructor used." << endl;
    }
    
    //Derived Overloaded constructor
    Derived(int derivedValue) : Base(derivedValue), derivedValue(derivedValue * 2)
    {
        cout << "Derived overloaded constructor used." << endl;
    }
    
    //Destructor
    ~Derived()
    {
         cout << "Derived Destructor used" << endl;
    }
    
    //Copy Constructor
    //Slicing done to slice the part of the Base class from drived class object and pass it to base class method
    Derived(const Derived &source)
    :Base(source), derivedValue(source.derivedValue)
    {
        cout << "Derived copy constructor" << endl;
    }
    
    //Copy Assignment
    Derived & operator=(const Derived &rhs)
    {
        cout << "Derived operator=" << endl;
        if(this == &rhs)
            return *this;
        
        //Slicing done to slice the part of the Base class from drived class object and pass it to base class method
        Base::operator=(rhs);
        derivedValue = rhs.derivedValue;
        return *this;
        
    }
    
};


int main()
{
    //Base b {100};    //Overloaded constructor
    //Base b1 {b};     //Copy constructor
    //b = b1;          //Copy assignment
    
    Derived d {100};   //Overloaded constructor
    Derived d1 {d};    //Copy constructor
    d = d1;            //Copy assignment
    
    return 0;
}
