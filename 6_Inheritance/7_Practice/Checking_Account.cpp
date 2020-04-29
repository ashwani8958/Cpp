//
//  Checking_Account.cpp
//  6_Inheritance
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account (name, balance)
{
    
}

bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const Checking_Account &account)
{
    os << "[Checking_Account: " << account.name << ": " << account.balance  << "]" << endl;
    return os;
}
