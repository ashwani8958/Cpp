//
//  main.cpp
//  9_ExceptionHandling
//
//  Created by Ashwani on 28/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


#include <iostream>

void func_a();
void func_b();
void func_c();

void func_a() {
    std::cout << "Starting func_a" << std::endl;
    func_b();
    std::cout << "Ending func_a" << std::endl;
}

void func_b() {
    std::cout << "Starting func_b" << std::endl;
//    func_c();
    try {
        func_c();
    }
    catch (int &ex) {
         std::cout << "Caught error in func_b" << std::endl;
    }
    std::cout << "Ending func_b" << std::endl;
}

void func_c()  {
    std::cout << "Starting func_c" << std::endl;
    throw 100;
    std::cout << "Ending func_c" << std::endl;
}

int main() {
    
    std::cout << "Starting main" << std::endl;
    try {
        func_a();
    }
    catch (int &ex) {
        std::cout << "Caught error in main" << std::endl;
    }
    std::cout << "Finishing main" << std::endl;
    return 0;
}

/*
When the exception occur in the called function then catch block would be 1st search in the called function after that in the calling functions and functions will be pop out of the stack till it find the catch call in the last catch is searched in the main function if it is found in the main then program will execute from that point onwards and the other function will not be called as they are poped up from the stack.
if catch is not found in the main also then program will be terminated.
*/
