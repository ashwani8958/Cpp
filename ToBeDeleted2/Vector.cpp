//
//  Vector.cpp
//  ToBeDeleted2
//
//  Created by Ashwani on 16/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Vector.hpp"
Vector::Vector(int length)
:length(length - 1)
{
    fptrnum = new float[this->length];
}

void Vector::createVector()
{
    for (size_t i = 0; i <= length; i++)
    {
        cout << "Enter value at " << i + 1 << "th pos :- ";
        cin >> fptrnum[i];
    }
    return;
}

void Vector::display()
{
    cout << "(";
    for(size_t i = 0; i <= length; i++)
    {
        cout << fptrnum[i] << ", " ;
    }
    cout << ")" << endl;
    return;
}

void Vector::modifyVector(int position, float value)
{
    fptrnum[position] = value;
    return;
}

void Vector::multiplyByScalar(int scalar)
{
    for (size_t i = 0; i <= length; i++)
    {
        fptrnum[i] *= scalar;
    }
    return;
}
void Vector::multiplyVector(const Vector &v1, const Vector &v2)
{
//    Vector v3{v1.length};
    for (size_t i = 0; i <= length; i++)
    {
        fptrnum[i] = v1.fptrnum[i]*v2.fptrnum[i];
    }
    return;
}
