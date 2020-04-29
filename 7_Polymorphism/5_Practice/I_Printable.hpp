//
//  I_Printable.hpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef I_Printable_hpp
#define I_Printable_hpp

#include <iostream>
#include <vector>

using namespace std;

class I_Printable
{
    friend ostream &operator<<(ostream &os, const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

#endif /* I_Printable_hpp */
