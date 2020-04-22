//
//  main.cpp
//  1_FileOperation
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

//Code to find the number of line in the file
// Reference :-
//1. http://www.cplusplus.com/reference/fstream/ifstream/
//2. http://www.cplusplus.com/doc/tutorial/files/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
  string userfile{};
  char c{};
  int count{};

  cout << "Enter the file name: ";
  cin >> userfile;

  //ifstream: Stream class to read from files
  ifstream inputFile(userfile);
  if(!inputFile)
  {
    cout << "File " << userfile << " does not exist"<<endl;
    return 1;
  }

  while(inputFile.get(c))
  {
    if(c == '\n')
    {
      count++;
    }
  }

  cout<<"Total lines in file: "<<count << endl;

  return 0;
}
