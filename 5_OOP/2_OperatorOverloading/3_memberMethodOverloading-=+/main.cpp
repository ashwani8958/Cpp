//
//  main.cpp
//  5_OOP
//
//  Created by Ashwani on 24/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Mystring.hpp"

int main()
{
    Mystring larry {"Larry"};
    larry.display();                                        // Larry
    
    larry = -larry;
    larry.display();                                        // larry
    
    cout << boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;
    
    cout << (larry == moe) << endl;                         // false
    cout << (larry == stooge) << endl;                      // true
    
    Mystring stooges = larry + "Moe";
    //Mystring stooges = "Larry" + moe;                     // Compiler error, OK with non-member function
    stooges.display();                                      // LarryMoe
    
    Mystring two_stooges = moe + " " + "Larry";
    two_stooges.display();                                  // Moe Larry
    Mystring three_stooges = moe + " " + larry + " " +  "Curly";
    three_stooges.display();                                // Moe larry Curly

    return 0;
}
