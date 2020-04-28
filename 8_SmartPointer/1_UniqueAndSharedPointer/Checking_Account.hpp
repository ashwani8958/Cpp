//
//  Checking_Account.hpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Checking_Account_hpp
#define Checking_Account_hpp

#include "Account.hpp"

class Checking_Account : public Account
{
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account() = default;
};

#endif /* Checking_Account_hpp */
