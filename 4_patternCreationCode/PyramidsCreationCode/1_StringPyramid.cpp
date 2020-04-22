//
//  1_StringPyramid.cpp
//  4_patternCreationCode
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <string>

//i have added this line through ashwanibackup0
//as
using namespace std;

int main()
{
  string format{};
  cout << "Enter the pattern: ";
  getline(cin, format);

  int print_line{}, print_space{};
  unsigned long space_limit = format.size() - 1;
  unsigned long str_len = format.size();
  int print_index{};

  for(print_line = 1; print_line <= str_len; print_line++)
  {
    //print_space
    for(print_space = 1 ; print_space <= space_limit; print_space++)
    {
      cout << " ";
    }

    for(print_index = 0; print_index < print_line; print_index++)
    {
      cout << format.at(print_index);
    }

    for(print_index = print_index - 2; print_index >= 0; print_index--)
    {
      cout << format.at(print_index);
    }
    space_limit--;
    cout<<endl;
  }
  return 0;
}
