//
//  InsufficientFundsException.hpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef InsufficientFundsException_h
#define InsufficientFundsException_h
#include <iostream>
class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept
    {
        return "Insufficient funds exception";
    }
};

#endif /* InsufficientFundsException_h */
