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
    Mystring moe {"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    return 0;
}
