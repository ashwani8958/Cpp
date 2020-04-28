//
//  I_Printable.cpp
//  8_SmartPointer
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "I_Printable.hpp"
ostream & operator<<(ostream &os, const I_Printable &obj)
{
    obj.print(os);
    return os;
}
