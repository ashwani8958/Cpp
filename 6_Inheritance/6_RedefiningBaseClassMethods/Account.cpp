//
//  Account.cpp
//  6_Inheritance
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"

//No arg constructor
Account::Account() : balance(0.0)
{
    cout<<"Account No arg constructor"<<endl;
}

//Overloaded constructor
Account::Account(double balance):balance(balance)
{
    cout<<"Account overloaded constructor"<<endl;
}

//Methods
void Account::deposit(double amount)
{
    balance = balance + amount;
}

void Account::withdraw(double amount)
{
    if (balance-amount >= 0)
        balance-=amount;
    else
        cout << "Insufficient funds" << endl;
}

ostream & operator<<(ostream &os, const Account &account)
{
    os <<  "Account balance: " << account.balance;
    return os;
}
