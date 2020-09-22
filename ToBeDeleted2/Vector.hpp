//
//  Vector.hpp
//  ToBeDeleted2
//
//  Created by Ashwani on 16/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <iostream>
using namespace std;

class Vector
{
    float *fptrnum;
    int length;
    
public:
    Vector(int length);
    void createVector();
    void display();
    void modifyVector(int position, float value);
    void multiplyByScalar(int scalar);
    void multiplyVector(const Vector &v1, const Vector &v2);
};

#endif /* Vector_hpp */
