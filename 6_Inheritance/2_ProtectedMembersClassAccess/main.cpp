//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

//Parent class
class Base
{
    // Note friends of Base have access to all
public:
    int a {0};
    
    // member method has access to all
    void display() { std::cout << a << ", " << b << ", " << c << endl; }
    
protected:
    //protected member can be change only by member method
    int b {0};
    
private:
    //private member can be change only by member method
    int c {0};
};

//Child class
//With public inheritance
class Derived: public Base
{
    // Note friends of Derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible
public:
    void access_base_members()
    {
        a = 100;    // OK
        b = 200;    // OK
      //c = 300;    // As 'c' not accessible, therefore it cant be modified by member method
    }
    
};

int main()
{
    
    cout << "=== Base member access from base objects ===========" << endl;
    Base base;
    base.a = 100;   // OK
  //base.b = 200;   // Compiler Error, because 'b' is private member
  //base.c = 300;   // Compiler Error, because 'c' is protected member
    
    cout << "=== Base member access from derived objects ========" << endl;
    Derived d;
    d.a = 100;  // OK
  //d.b = 200;  // Compiler Error, because 'b' is private member
  //d.c = 300;  // Compiler Error, as it is not accessible by child class therefore it can't be modified
    return 0;
}

