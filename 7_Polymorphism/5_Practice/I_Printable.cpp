//
//  I_Printable.cpp
//  7_Polymorphism
//
//  Created by Ashwani on 29/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "I_Printable.hpp"

ostream& operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}
