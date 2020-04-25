//
//  SavingAccount.hpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef SavingAccount_hpp
#define SavingAccount_hpp

#include "Account.hpp"

class SavingAccount:public Account
{
public:
    double interest_rate;
    
    //Constructor
    SavingAccount();
    
    //Methods
    void deposit(double amount);
    void withdraw(double amount);
};
#endif /* SavingAccount_hpp */
