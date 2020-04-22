//
//  Player.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Player.hpp"


//Static class member can only be initial in class.cpp file
int Player::num_players {0};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
}

Player::Player(const Player &source)
       : Player {source.name, source.health, source.xp}  {
}

Player::~Player() {
    --num_players;
}

int Player::get_num_players() {
    return num_players;
}
