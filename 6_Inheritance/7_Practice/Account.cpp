//
//  Account.cpp
//  6_Inheritance
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"

Account::Account(string name, double balance)
:name(name), balance(balance)
{
    
}

bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    else
    {
        balance = balance + amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if(balance - amount < 0)
        return false;
    else
    {
        balance = balance - amount;
        return true;
    }
}

double Account::get_balance() const
{
    return balance;
}

ostream & operator<<(ostream &os, const Account &obj)
{
    os << "[Account: " << obj.name << ": Balance: " << obj.balance << " ]" << endl;
    return os;
}
