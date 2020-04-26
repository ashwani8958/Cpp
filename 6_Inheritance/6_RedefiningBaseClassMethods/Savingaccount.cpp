//
//  Savingaccount.cpp
//  6_Inheritance
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Savingaccount.hpp"
#include "Account.hpp"

Savingaccount::Savingaccount(double balance, double int_rate)
    : Account(balance), int_rate{int_rate} {
        
    }

Savingaccount::Savingaccount()
    : Savingaccount{0.0, 0.0} {
        
    }
    
void Savingaccount::deposit(double amount) {
    amount = amount + (amount * int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savingaccount &account) {
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.int_rate;
    return os;
}
