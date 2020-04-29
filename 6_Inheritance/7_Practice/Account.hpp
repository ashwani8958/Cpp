//
//  Account.hpp
//  6_Inheritance
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <iostream>
#include <vector>
using namespace std;

class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(string name = def_name, double balance = def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};
#endif /* Account_hpp */
