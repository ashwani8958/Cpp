//
//  Account.hpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include "I_Printable.hpp"

class Account:public I_Printable
{
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    double balance;
    string name;
public:
    Account(string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(ostream &os) const override;
    virtual ~Account() = default;
    
};

#endif /* Account_hpp */
