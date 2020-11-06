//
//  main.cpp
//  1_FileOperation
//
//  Created by Ashwani on 23/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

class Inventory
{
    char name[10];
    int code;
    float cost;
public:
    void readData();
    void writeData();
};

void Inventory::readData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter cost: ";
    cin >> cost;
}

void Inventory::writeData()
{
    cout << setiosflags(ios::left)  << setw(10) << name  << setiosflags(ios::right)  << setw(10) << code  << setprecision(2)  << setw(10) << cost  << endl;
}

int main()
{
    Inventory item[3];
    fstream file;
    
    file.open("./4_ReadWriteClassObject/Stock.txt", ios::in | ios::out);
    if(!file)
    {
        cout << "Error in opening file: " << "Stock.txt" << endl;
        return 1;
        
    }
    
    cout << "ENTER DETAILS FOR THREE ITEMS \n";
    for(size_t i = 0; i < 3; i++)
    {
        item[i].readData();
        file.write((const char *)&item[i], sizeof(item[i]));
    }
    
    /// Reset to start
    file.seekg(0);
    
    cout << "\nOUTPUT\n" << endl;
    
    for(size_t i = 0; i < 3; i++)
    {
        file.read((char *) & item[i], sizeof(item[i]));  item[i].writeData();
        
    }  file.close();

  return 0;
    
}
