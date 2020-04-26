//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

// Base class initialization

#include <iostream>

using namespace std;

class Base
{
private:
    int value;
public:
    
    //No args constructor
    Base()
    :value(0)
    {
        cout << "Base no args constructor" << endl;
    }
    
    //Constructor overloading
    Base(int x)
    :value(x)
    {
        cout << "Base (int) overloaded constructor" << endl;
    }
    
    //Destructor
    ~Base()
    {
        cout << "Base destructor" << endl;
    }
    
};


class Derived : public Base
{
private:
    int doubled_value;

public:
    
    //No args constructor
    Derived()
        :Base(), doubled_value (0)
    {
        cout << "Derived no-args constructor " << endl;
    }
    
    //Constructor overloading
    Derived(int x)
        :Base(x),  doubled_value (x * 2)
    {
        cout << "Derived (int) constructor" << endl;
    }
    
    //Destructor
    ~Derived()
    {
        cout << "Derived destructor " << endl;
    }
};

int main()
{
    //Derived d;
    Derived d {1000};
    return 0;
}
