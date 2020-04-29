//
//  Account_Util.hpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_Util_hpp
#define Account_Util_hpp

#include "Account.hpp"

void display(const vector<Account *> &accounts);
void deposit(vector<Account *> &accounts, double amount);
void withdraw(vector<Account *> &accounts, double amount);

#endif /* Account_Util_hpp */
