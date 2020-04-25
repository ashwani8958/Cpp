//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//
// Refer video no 176 in udemy for more info
// https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535660#overview

#include <iostream>

using namespace std;

class Base
{
private:
    int value;
public:
   Base() : value{0} { cout << "Base no-args constructor" << endl; }
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base
{
  
    //automatically inheritance, it will initilised base part of object but it won't initialise drive part of object
    using Base::Base;
    
private:
    int doubled_value;
public:
    Derived() : doubled_value {0} { cout << "Derived no-args constructor " << endl; }
    Derived(int x) : doubled_value {x*2}  { cout << "Derived (int) overloaded constructor" << endl; }
    ~Derived() { cout << "Derived destructor " << endl; }
};

int main()
{
       //Base b;
       //Base b{100};
       //Derived d;
       Derived d {1000};// in base class no arg constructor is called 
       
       return 0;
}
/*
 Using automatically inheritance will inherit all non-spacial method from parent class but it won't take care of
 initialization of the derived class member
 Non-spacial members are
 1. constructor with agruments
 2. copy assisgments
 and other
 
 However, the DERIVED class constructors, destructors, and overloaded assignment operators can invoke the
 base-class versions
 */
