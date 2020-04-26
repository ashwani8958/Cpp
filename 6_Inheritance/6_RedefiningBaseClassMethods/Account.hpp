//
//  Account.hpp
//  6_Inheritance
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <iostream>
using namespace std;

class Account
{
    //Non-member method for (<<)operator overloading
    friend ostream & operator<<(ostream &os, const Account &account);
//inherite class with public access can't access the private mamber
protected:
    double balance;

public:
    //No arg constructor
    Account();
    
    //Overloaded constructor
    Account(double balance);
    
    //Methods
    void deposit(double amount);
    void withdraw(double amount);
};

#endif /* Account_hpp */
