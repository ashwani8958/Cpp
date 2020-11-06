//
//  main.cpp
//  ToBeDeleted2
//
//  Created by Ashwani on 16/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    // Complete the code.

    int num1{}, num2{};
    size_t loopIndex;
    
    cin >> num1 >> num2;

    vector<string> vString{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


    
        if(num2 <= 9)
        {
            for(loopIndex = num1; loopIndex <= num2; loopIndex++)
            {
                cout << vString[loopIndex] << endl;
            }
        }
        else
        {
           for(loopIndex = num1; loopIndex <= 9; loopIndex++)
            {
                cout << vString[loopIndex] << endl;
            }
            for(loopIndex = 10; loopIndex <= num2; loopIndex++)
            {
                if(loopIndex%2 == 0)
                {
                    cout << "Even\n";
                }
                else
                {
                    cout << "odd\n";
                }
            }
        }

    

    
    return 0;
}

