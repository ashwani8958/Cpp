//
//  3_ReadFromFile.cpp
//  1_FileOperation
//
//  Created by Ashwani on 30/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename, line;
    
    cout << "Enter the file name: ";
    cin >> filename;
    
    ifstream infile;
    infile.open(filename);
    
    if(!infile)
    {
        cout << "Error in opening file" << endl;
        return 1;
    }
    
    while(getline(infile, line))
    {
        cout << line <<endl;
    }
    
    infile.close();
    return 0;
}
