//
//  1_createclass.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


//Declare a Class
class Player
{
  //attributes or data
  //initialisation of attributes are the feature of C++11 onward
  string name{"Player"};
  int health{0};
  int xp{0};

  //Method or function
  void talk(string textToSay);
  bool isDead();
};

class Account
{
  //attributes
  string name;
  double balance;

  //method
  bool withdraw(double amount);
  bool deposite(double amount);
};

int main()
{
  //Creating object
  Player frank;
  Player hero;
  Account frankAccount;
  Account jimAccount;

  //Pointer to created object
  Player *enemy = new Player();
  delete enemy;

  //Create the array of class object
  Player player[] {frank, hero};
  Account acoount [] {frankAccount, jimAccount};


  //Create the vector of the object of the created class
  vector <Player> playerVector{frank};
  playerVector.push_back(hero);

  return 0;
}
