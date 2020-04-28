//
//  main.cpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

/*
When the exception occur in the called function then catch block would be 1st search in the called function after that in the calling functions and functions will be pop out of the stack till it find the catch call in the last catch is searched in the main function if it is found in the main then program will execute from that point onwards and the other function will not be called as they are poped up from the stack.
if catch is not found in the main also then program will be terminated.
*/

#include <iostream>

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;
    
    try {
        if (gallons == 0)
            throw 0;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex) {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
    std::cout << "Bye" << std::endl;
    return 0;
}
