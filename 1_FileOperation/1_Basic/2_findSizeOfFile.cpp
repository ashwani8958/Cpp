//
//  2_findSizeOfFile.cpp
//  1_FileOperation
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

//Find the size of the files
//Reference :-
//1. http://www.cplusplus.com/reference/fstream/ifstream/
//2. http://www.cplusplus.com/doc/tutorial/files/
//3. https://medium.com/@VIRAL/mac-xcode-and-c-file-handling-78ba999032df

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string userfile{};
  unsigned long begin{}, end{};

  cout << "Enter the file name: ";
  cin >> userfile;

  ifstream inputFile(userfile);
  /*
  If file stream was successful opening a file, check it by calling
  to member is_open function returns a bool value of true in the case
  that indeed the stream object is associated with an open file,
  or false otherwise:
  */
  if(!inputFile.is_open())
  {
    cout << endl << "Couldn't open File " << userfile << endl << endl;
    return 1;
  }

  begin = inputFile.tellg();      //Get position in input sequence
  inputFile.seekg(0, ios::end);   //Set position in input sequence
  end = inputFile.tellg();

  inputFile.close();              //Close file

  cout << "The Size of the File " << userfile << " " << (end - begin) << " Byte." << endl;
  return 0;
}

