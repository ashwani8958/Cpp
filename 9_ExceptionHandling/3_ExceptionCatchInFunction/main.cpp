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

double calculate_mpg(int miles, int gallons)
{
    if (gallons == 0)
        throw 0;
    return static_cast<double>(miles) / gallons;
}

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;
    
    try
    {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    
    catch (int &ex)
    {
        std::cerr << "Tried to divide by zero" << std::endl;
    }
    
    std::cout << "Bye" << std::endl;
    
    return 0;
}
