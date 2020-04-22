//
//  Friend_class.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "Friend_class.hpp"
#include <iostream>

class Player;
void Friend_class::set_hero_name(Player &p, std::string name) {
    p.name = name;
}

void Friend_class::display_player(Player &p) {
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl;
}
