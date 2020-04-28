//
//  Account_Util.cpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Account_Util.hpp"

//Display Account object in a vector of account object pointer
void display(const vector<Account *> &accounts)
{
    cout << "\n================================ Accounts ================================" << endl;
    for(const auto acc : accounts)
        cout << *acc << endl;
}

//Deposits supplied amount to each Account object in the vector
void deposit(vector<Account *> &accounts, double amount)
{
    cout << "\n======================= Depositing from Accounts ==========================" << endl;
    for(auto acc:accounts)
    {
        if(acc->deposit(amount))
            cout << "Deposited " << amount << " to " << *acc << endl;
        else
            cout << "Failed Deposit of " << amount << " to " << *acc << endl;
            
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account *> &accounts, double amount)
{
    cout << "\n======================= Withdrawing from Accounts ==========================" << endl;
    for (auto acc:accounts)
    {
        if (acc->withdraw(amount))
            cout << "Withdrew " << amount << " from " << *acc << endl;
        else
            cout << "Failed Withdrawal of " << amount << " from " << *acc << endl;
    }
}
