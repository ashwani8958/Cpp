//
//  4_DefaultConstructors.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


// Default Constructor Parameters
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
  //  Player() {}    // Will cause a compiler error Because there will be two constructor

};


Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
            cout << "Three-args constructor" << endl;
}


int main() {

    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};

    return 0;
}

