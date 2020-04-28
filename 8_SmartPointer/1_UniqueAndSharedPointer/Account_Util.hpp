//
//  Account_Util.hpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Account_Util_hpp
#define Account_Util_hpp
#include "Account.hpp"


// Utility helper functions for Account * class
void display(const vector<Account *> &accounts);
void deposit(vector<Account *> &account, double amount);
void withdraw(vector<Account *> &account, double amount);

#endif /* Account_Util_hpp */
