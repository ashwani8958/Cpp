//
//  Trust_Account.hpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Trust_Account_hpp
#define Trust_Account_hpp

#include "Savings_Account.hpp"


class Trust_Account : public Savings_Account
{
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;

protected:
    int num_withdrawals;

public:
    Trust_Account(std::string name = def_name,  double balance = def_balance, double int_rate = def_int_rate);
    
    // Deposits of $5000.00 or more will receive $50 bonus
    virtual bool deposit(double amount) override;
    
    // Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;

};

#endif /* Trust_Account_hpp */
