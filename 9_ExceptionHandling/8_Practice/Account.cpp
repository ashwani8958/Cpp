//
//  Account.cpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account.hpp"

Account::Account(string name, double balance)
:name(name), balance(balance)
{
    if(balance<0.0)
       throw IllegalBalanceException();
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
    if(balance - amount < 0)
        throw InsufficientFundsException();
    else
    {
        balance -= amount;
        return true;
    }
}

void Account::print(ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
