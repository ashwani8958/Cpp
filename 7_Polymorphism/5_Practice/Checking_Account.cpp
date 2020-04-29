//
//  Checking_Account.cpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account (name, balance)
{
    
}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Checking_Account: " << name << ": " << balance  << "]";
}
