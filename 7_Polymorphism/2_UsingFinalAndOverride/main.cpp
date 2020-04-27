//
//  main.cpp
//  7_Polymorphism
//
//  Created by Ashwani on 27/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

/*
 
 Using FINAL and OVERRIDE keyword
 
 1. Final
 After a function is declare FINAL it can't to override in the other class derived from the base class
 After class is declare FINAL no other class can't to derived from it.
 
 class ABC final
 {
 class object and methods;
 };
 
 2. Override
 while declaring virtual method it should be fixed with OVERRIDE keyword, it will generate an error during compile time if derived class method(don't have the same signnature) don't contain same number of argument and return type as of base class.
 
 void funName() override;
 
 */

#include <iostream>

using namespace std;

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    virtual void say_hello()  const override final {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

class Another: public Derived {
public:
    // Error cannot override final method as it is marked final at line 42
    virtual void say_hello()  const override
    {
        std::cout << "Hello - I'm a Another class object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}

using namespace std;

int main() {
    Base b;
    b.say_hello();                      // Base::say_hello()
    
    Derived d;                          // Derived::say_hello()
    d.say_hello();
    
    Base *p1 = new Base();              // Base::say_hello()
    p1->say_hello();
    
    Derived *p2 = new Derived();        // Derived::say_hello()
    p2->say_hello();
    
    Base *p3 = new Derived();           //  Base::say_hello()   ?????   IMPORTANT !!!
    p3->say_hello();
    
    std::cout <<  "\n========================" << std::endl;
    greetings(b);
    greetings(d);
    greetings(*p1);
    greetings(*p2);
    greetings(*p3);
    return 0;
}


