//
//  main.cpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Trust_Account.hpp"
#include "Checking_Account.hpp"
#include "Account_Util.hpp"

int main()
{
//     Account frank{"Frank", 5000};         // should not compile
//     cout << frank << endl;
    
    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr << endl;
    
    Checking_Account frank {"Frank", 5000};
    cout << frank << endl;
    
    Account *trust = new Trust_Account("James");
    cout << *trust << endl;
    
    Account *p1 = new Checking_Account("Larry", 10000);
    Account *p2 = new Savings_Account("Moe", 1000);
    Account *p3 = new Trust_Account("Curly");
    
    std::vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}
