//
//  main.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//


// Static class members
#include <iostream>

#include "Player.hpp"

using namespace std;

void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player frank{"Frank"};
        display_active_players();
    }
    display_active_players();
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();
    delete enemy;
    display_active_players();



    return 0;
}

