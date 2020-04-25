//
//  main.cpp
//  6_Inheritance
//
//  Created by Ashwani on 24/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "SavingAccount.hpp"

int main(int argc, const char * argv[])
{
    // Use the Account class
    cout << "\n=== Account ==================================" << endl;
    Account acc {};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    cout << endl;
    
    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    // Use the Savings Account class
    
    cout << "\n=== Savings Account ==========================" << endl;
    SavingAccount sav_acc {};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    
    cout << endl;
    
    SavingAccount *p_sav_acc {nullptr};
    p_sav_acc = new SavingAccount();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;
    
    cout << "\n==============================================" << endl;
}
