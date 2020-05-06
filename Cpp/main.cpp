//
//  main.cpp
//  1_FileOperation
//
//  Created by Ashwani on 30/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

using namespace std;

#if 0

#endif

#if 1
int main()
{
    string wordToFind, readWordfromfile, filename = "../3_WordFinder/romeoandjuliet.txt", line;
    int totalCountWord{0}, foundWordCount{0};
    
    ifstream inFile;
    
    inFile.open(filename);
    if(!inFile)
    {
        cout << "Error in opening file: " << filename << endl;
        return 1;
    }
    
    cout << "Enter the Substring to search: " ;
    cin >> wordToFind;
    
    while(inFile >> readWordfromfile)
    {
        totalCountWord++;
        if(readWordfromfile.find(wordToFind) == std::string::npos)
                foundWordCount++;
            
    }
   
    cout << totalCountWord << " word were searched\n";
    cout << "The substring " << wordToFind << " was found " << foundWordCount << " times " << endl;
    return 0;
}
#endif
