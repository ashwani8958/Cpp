//
//  Checking_Account.hpp
//  6_Inheritance
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Checking_Account_hpp
#define Checking_Account_hpp

#include "Account.hpp"

class Checking_Account : public Account
{
    friend ostream &operator<<(ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(string name = def_name, double balance = def_balance);
    bool withdraw(double);
    // Inherits the Account::deposit method
};

#endif /* Checking_Account_hpp */
