//
//  1_constantQualifier.cpp
//  5_OOP
//
//  Created by Ashwani on 15/09/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   static int num_players;
   std::string name;
   int health;
   int xp;
public:
    std::string get_name()const { return name; }
    void set_name(string name){this->name = name;}
    
    int get_health() { return health; }
    int get_xp() {return xp; }
    
    // Constructor
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
    
};

//Static class member can only be initial in class.cpp file
int Player::num_players {0};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
}


void displayName(const Player &p)
{
    cout << p.get_name() << endl;
}

int main()
{
    const Player villain {"Villain", 100, 50};
    Player hero{"hero", 100, 15};
    
    displayName(villain);
    
    return 0;
}
