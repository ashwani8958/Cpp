//
//  Account_Util.hpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_Util_hpp
#define Account_Util_hpp

#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"

#include <vector>

// Utility helper functions for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

#endif /* Account_Util_hpp */
