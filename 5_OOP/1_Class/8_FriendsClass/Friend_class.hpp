//
//  Friend_class.hpp
//  Class
//
//  Created by Ashwani on 22/04/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef Friend_class_hpp
#define Friend_class_hpp

#include <string>
#include "Player.hpp"

class Friend_class
{
public:
    void set_hero_name(Player &p, std::string name);
    void display_player(Player &p);
};

#endif /* Friend_class_hpp */
