//
//  Saving_Account.cpp
//  6_Inheritance
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Saving_Account.hpp"

Savings_Account::Savings_Account(string name, double balance, double int_rate)
:Account(name, balance), int_rate(int_rate)
{
    
}

bool Savings_Account::deposit(double amount)
{
    amount = amount + amount * (int_rate/100);
    return(Account::deposit(amount));
}

ostream &operator<<(ostream &os, const Savings_Account &obj)
{
    os << "Savings Account: " << obj.name << ", Balance: " << obj.balance << ", Interest rate: " << obj.int_rate << "%]" << endl;
    return os;
}
