//
//  Other_class.cpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include <iostream>
#include "Other_class.hpp"
#include "Player.hpp"

void Other_class::display_player(Player &p) {
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl;
   }
