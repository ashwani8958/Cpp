//
//  Account.cpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"

//Constructor
Account::Account()
:balance(0.0), name("Account")
{
    
}

//Methods
void Account::deposit(double amount)
{
    cout << "desposit method is called for amount " << amount << endl;
}


void Account::withdraw(double amount)
{
    cout << "withdraw method is called for amount " << amount << endl;
}
