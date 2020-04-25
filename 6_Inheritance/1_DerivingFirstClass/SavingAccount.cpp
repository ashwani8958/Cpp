//
//  SavingAccount.cpp
//  6_Inheritance
//
//  Created by Ashwani on 25/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "SavingAccount.hpp"
#include "Account.hpp"

SavingAccount::SavingAccount()
:interest_rate(3.0)
{
    
}

void SavingAccount::deposit(double amount)
{
    cout << "Saving Account desposit method is called for amount " << amount << endl;
}


void SavingAccount::withdraw(double amount)
{
    cout << "Saving Account withdraw method is called for amount " << amount << endl;
}
