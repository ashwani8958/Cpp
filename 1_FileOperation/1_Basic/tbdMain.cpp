//
//  tbdMain.cpp
//  1_FileOperation
//
//  Created by Ashwani on 23/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outf("ITEM");// connect ITEM file to outf
    cout << "Enter item name: ";
    char name[30];
    cin >> name;// get name from key board and
    outf << name << "\n";// write to file ITEM
    cout << "Enter item cost: ";
    float cost;
    cin >> cost;// get cost from key board and
    outf << cost << "\n";// write to file ITEM
    outf.close();// Disconnect ITEM file from outf
    ifstream inf("ITEM");// connect ITEM file to inf
    inf >> name;// read name from file ITEM
    
    inf >> cost;// read cost from file ITEM
    cout << "\n";
    cout << "Item name:" << name << "\n";
    cout << "Item cost:" << cost << "\n";
    inf.close();// Disconnect ITEM from inf

    
    return 0;
}
