//
//  IllegalBalanceException.hpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef IllegalBalanceException_h
#define IllegalBalanceException_h

class IllegalBalanceException:public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept
    {
        return "Illegal balance exception";
    }
};
#endif /* IllegalBalanceException_h */
