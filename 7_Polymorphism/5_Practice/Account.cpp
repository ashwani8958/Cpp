//
//  Account.cpp
//  7_Polymorphism
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
        amount += balance;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (balance-amount >=0)
    {
        balance-=amount;
        return true;
    }
    else
        return false;
}

void Account::print(std::ostream &os) const
{
    os.precision(2);
    os << fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
