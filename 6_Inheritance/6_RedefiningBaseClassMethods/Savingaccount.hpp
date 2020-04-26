//
//  Savingaccount.hpp
//  6_Inheritance
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Savingaccount_hpp
#define Savingaccount_hpp

#include "Account.hpp"
//inherite class with public access can't access the private mamber
class Savingaccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savingaccount &account);
protected:
    double int_rate;
public:
    Savingaccount();
    Savingaccount(double balance, double int_rate);
    void deposit(double amount);
    // Withdraw is inherited
};

#endif /* Savingaccount_hpp */
