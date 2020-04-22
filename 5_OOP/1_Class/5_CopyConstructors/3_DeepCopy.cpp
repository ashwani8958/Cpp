//
//  3_DeepCopy.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

class Deep
{
private:
  int *data;

public:
  //Getter and setter funcation
  void setValue(int value){*data = value;}
  int getValue(){return *data;}

  //Constructor
  Deep(int value);

  //copy constructor
  Deep(const Deep &source);

  //Destructor
  ~Deep();
};

Deep::Deep(int value)
{
  data = new int;
  *data = value;
}

//Deep copy constructor
Deep::Deep(const Deep &source)
    : Deep(*source.data)
{
  cout << "Copy constructor  - Deep copy" << endl;
}

//Destructor
Deep::~Deep()
{
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_Deep(Deep s) {
    cout << s.getValue() << endl;
}

int main()
{
  Deep obj1 {100};
  display_Deep(obj1);

  Deep obj2 {obj1};
  obj2.setValue(1000);
  return 0;
}
