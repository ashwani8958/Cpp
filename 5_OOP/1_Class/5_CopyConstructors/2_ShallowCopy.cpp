//
//  2_ShallowCopy.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

class Shallow
{
private:
  int *data;

public:
  //Getter and setter funcation
  void setValue(int value){*data = value;}
  int getValue(){return *data;}

  //Constructor
  Shallow(int value);

  //copy constructor
  Shallow(const Shallow &source);

  //Destructor
  ~Shallow();
};

Shallow::Shallow(int value)
{
  data = new int;
  *data = value;
}

//Shallow copy constructor
Shallow::Shallow(const Shallow &source)
    : data{source.data}//use Shallow(*source.data) for deep copy
{
  cout << "Copy constructor  - shallow copy" << endl;
}

//Destructor
Shallow::~Shallow()
{
  delete data;
  cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {
    cout << s.getValue() << endl;
}

int main()
{
  Shallow obj1 {100};
  display_shallow(obj1);

  Shallow obj2 {obj1};
  obj2.setValue(1000);
  return 0;
}
