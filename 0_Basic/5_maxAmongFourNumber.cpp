//
//  5_maxAmongFourNumber.cpp
//  0_Basic
//
//  Created by Ashwani on 22/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
int maxOfFour(int a, int b, int c, int d)
{
//    array<int, 2> arr1{};
    int arr[2] {};
    arr[0] = a;
    arr[1] = b;
    bool index;
    
    index = !(arr[0] - arr[1] + abs(arr[0] - arr[1]));
    swap(arr[0], arr[index]);
    
    arr[1] = c;
    index = !(arr[0] - arr[1] + abs(arr[0] - arr[1]));
    swap(arr[0], arr[index]);
    
    arr[1] = d;
    index = !(arr[0] - arr[1] + abs(arr[0] - arr[1]));
    swap(arr[0], arr[index]);
    
    return arr[0];
    
}
int main()
{
    int a = 4, b = 9, c = 7, d = 5;
    
    cout << "Maximum among " << a << ", " << b << ", " << c << ", " << d << " is " << maxOfFour(a, b, c, d) << endl;
    
    
    return 0;
}
