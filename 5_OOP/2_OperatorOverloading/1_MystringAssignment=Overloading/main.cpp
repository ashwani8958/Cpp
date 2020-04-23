//
//  main.cpp
//  5_OOP
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


#include "Mystring.hpp"
#include <vector>
int main()
{
    Mystring a {"Hello"};                // overloaded constructor
    Mystring b;                          // no-args contructor
    b = a;                               // copy assignment or b.operator=(a)
    b = "This is a test";                // b.operator=("This is a test");
    
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};             // copy constructor
    Mystring stooges;                    // no-args constructor
    
    empty = stooge;                      // copy assignment operator
    
    empty.display();                     // Larry : 5
    larry.display();                     // Larry : 5
    stooge.display();                    // Larry : 5
    empty.display();                     // Larry : 5
    
    stooges = "Larry, Moe, and Curly";
    stooges.display();                              // Larry, Moe, and Curly : 21
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec)
        s.display();                                        // Larry
    // Moe
    //Curly
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                              // copy assignment
    
    cout << "=== Loop 3 ================" << endl;
    for (const Mystring &s: stooges_vec)
        s.display();                                     // Changed
    // Changed
    // Changed
      
    return 0;
}
