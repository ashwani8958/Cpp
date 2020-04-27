//
//  main.cpp
//  1_BaseClassPointers
//
//  Created by Ashwani on 26/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

/*
 This class uses dynamic polymorphism for the withdraw method
 VIRTUAL KEYWORD is used to create dynamic polymorphism it will automatically take care of from which class it has to use withdraw mathod.
 
 VIRTUAL KEYWORD should also to used with Destructor if it is used with any function in the class
 */

class Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "In Account::withdraw" << endl;
    }
    
    //Destructor
    virtual ~Account() { cout << "Account:: destructor" << endl; }
};

//Derived Class from Account
class Checking: public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "In Checking::withdraw" << endl;
    }
    
    //Destructor
    virtual ~Checking() { cout << "Checking:: destructor" << endl; }
};

//Derived Class from Account
class Savings: public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "In Savings::withdraw" << endl;
    }
    
    //Destructor
    virtual ~Savings() { cout << "Saving:: destructor" << endl; }
};

//Derived Class from Account
class Trust: public Account
{
public:
    virtual void withdraw(double amount)
    {
        cout << "In Trust::withdraw" << endl;
    }
    
    //Destructor
    virtual ~Trust() { cout << "Trust:: destructor" << endl; }
};

//Non Class method
void do_withdraw(Account &account, double amount)
{
    account.withdraw(amount);
}

int main()
{
    std::cout << "\n === Pointers ==== " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    std::cout << "\n === Array ==== " << std::endl;
    Account *array [] = {p1,p2,p3,p4};
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000);
    
    std::cout << "\n === Array ==== " << std::endl;
    array[0] = p4;
    for (auto i=0; i<4; ++i)
        array[i]->withdraw(1000);
    
    std::cout << "\n === Vector ==== " << std::endl;
    std::vector<Account *> accounts {p1,p2,p3,p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
    
    std::cout << "\n === Vector ==== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);

    //References
    cout << "\n === References === " << endl;
    Account a;
    Account &ref = a;
    ref.withdraw(1000);            // In Account::withdraw
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);           // In Trust::withdraw
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1, 1000);         // In Account::withdraw
    do_withdraw(a2, 2000);         // In Savings::withdraw
    do_withdraw(a3, 3000);         // In Checking::withdraw
    do_withdraw(a4, 4000);         // In Trust::withdraw
    
    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}
