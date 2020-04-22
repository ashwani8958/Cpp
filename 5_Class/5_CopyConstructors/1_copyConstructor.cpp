//
//  1_copyConstructor.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


// Copy Constructor
#include <iostream>

using namespace std;

class Player
{
private:
  string name;
  int health;
  int xp;

public:
  string getName(){return name;}
  int getHealth(){return health;}
  int getXP(){return xp;}

  //// Constructor Initialization
  Player (string name="None", int health = 0, int xp = 0);

  //copy Constructor
  Player (const Player &source);

  //Destructor
  ~Player(){cout << "Destructor is called for " + name << endl;}
};

Player::Player(string name_val, int health_val, int xp_val)
:name{name_val}, health{health_val}, xp{xp_val}{
  cout<<"Three args constructor for " + name << endl;
}

Player::Player(const Player &source)
:Player(source.name, source.health, source.xp){

  cout << "Copy constructor - made copy of: " << source.name << endl;

}

void display_player(Player p) {
    cout << "Name: " << p.getName() << endl;
    cout << "Health: " << p.getHealth() << endl;
    cout << "XP: " << p.getXP() << endl;
}


int main() {
    Player empty {"XXXXXX", 100, 50};

    Player my_new_object {empty};

    display_player(empty);

    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    return 0;
}

