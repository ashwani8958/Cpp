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
//#include <string>

using namespace std;

int main()
{
    //size_t i;
    string answerKey, filename = "../2_AutomatedGrader/responses.txt", line;
    int count{1}, marks{};
    double  average{};
    vector<string> names;
    vector<int> studentMarks;
    ifstream inFile;
    
    inFile.open(filename);
    if(!inFile)
    {
        cout << "Error in opening file: " << filename << endl;
        return 1;
    }
    
    getline(inFile, answerKey);
    while(getline(inFile, line))
    {
        count++;
        if(count%2 == 0)
            names.push_back(line);
        else
        {
            for(int i = 0; i < answerKey.size() ; i++)
            {
                if(line[i] == answerKey[i])
                    marks++;
            }
            studentMarks.push_back(marks);
        }
        marks=0;
    }
    
    {
        // Print Header
        average = (std::accumulate(studentMarks.begin(), studentMarks.end(), 0)) / static_cast<double>(names.size());
        cout << setw(15) << std::left << "Student" << setw(5) << std::left  << "Score" << endl;
        std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
        std::cout << std::setfill(' ');
        
    }
    
    {
        //Print student with marks
        std::cout << std::setprecision(1) << std::fixed;
        {
            for(size_t i = 0; i < names.size(); i++ )
                cout << setw(15) << std::left << names.at(i) << setw(5) << std::left << studentMarks.at(i) << endl;
        }
    }
    
    {
        // Print footer
        std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
        std::cout << std::setfill(' ');
        std::cout << std::setw(15) << std::left << "Average score"<< std::setw(5) << std::right << average << endl;
        
    }
    inFile.close();
    return 0;
}
