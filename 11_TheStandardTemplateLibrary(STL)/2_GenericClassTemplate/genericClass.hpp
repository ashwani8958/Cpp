//
//  genericClass.h
//  Cpp
//
//  Created by Ashwani on 01/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef genericClass_h
#define genericClass_h

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Item {
private:
    string name;
    T value;
    
public:
    //constructor
    Item(string name, T value)
    :name(name), value(value)
    {
        
    }
    
    //Getter
    string get_name() const{return name;}
    T get_value() const{return value;}
};

template <typename T1, typename T2>
struct My_Pair
{
    T1 first;
    T2 second;
};
#endif /* genericClass_h */
