//
//  main.cpp
//  ToBeDeleted2
//
//  Created by Ashwani on 16/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Vector.hpp"
#include<vector>

int main(int argc, const char * argv[])
{
    // insert code here...
    Vector v1{5}, v2{5}, v3{5};
    v1.createVector();
    v2.createVector();
    v1.display();
    v2.display();
//    v1.multiplyByScalar(2);
//    v1.display();
    v3.multiplyVector(v1, v2);
    v3.display();


    return 0;
}

