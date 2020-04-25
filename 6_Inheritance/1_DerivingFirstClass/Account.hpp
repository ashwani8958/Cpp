//
//  Account.hpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp


#include <iostream>
using namespace std;

class Account
{
public:
    double balance;
    string name;
    
    //Constructor
    Account();
    
    //Methods
    void deposit(double amount);
    void withdraw(double amount);
    
};
#endif /* Account_hpp */
