//
//  Account.cpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"

Account::Account(string name, double balance)
:name(name), balance(balance)
{
    //constructor
}

bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance = balance + amount;
        return true;
    }
    return false;
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
