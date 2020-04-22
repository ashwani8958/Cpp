//
//  1_Constructors.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>

using namespace std;

class Player
{
private:
  string name;
  int health;
  int xp;

public:
  void setName(string plyName)
  {
    name = plyName;
  }

  //CONSTRUCTORS
  //CONSTRUCTORS CAN BE OVERLOADED
  //CONSTRUCTORS START WITH THE CLASS NAME AND HAVE NO RETURN TYPE
  Player()
  {
    cout << "No args constructors called." << endl;
  }
  Player(std::string name)
  {
    cout << "String arg constructor called"<< endl;
  }
  Player(std::string name, int health, int xp)
  {
    cout << "Three args constructor called"<< endl;
  }

  //Destructors can't be Overloaded and a class will have only
  //one Destructor. Destructor name is CLASS name preceded by ~ symbol.
  ~Player()
  {
    cout << "Destructor called for " << name << endl;
  }
};


int main()
{

  {
    Player slayer;
    slayer.setName("Slayer");
  }

  {
    Player frank;
    frank.setName("Frank");
    Player hero("Hero");
    hero.setName("Hero");
    Player villain("Villain", 100, 12);
    villain.setName("Villain");
  }

  Player *enemy = new Player;
  enemy->setName("Enemy");

  Player *level_boss = new Player("Level Boss", 1000, 300);
  level_boss->setName("Level Boss");

  delete enemy;
  delete level_boss;
}

