//
//  tabtenn0.cpp
//  c++study
//
//  Created by LiuWei on 16/1/13.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#include "tabtenn0.hpp"
#include <iostream>
#include <cstring>


TableTennisPlayer::TableTennisPlayer(const char * fn,
                                     const char * ln, bool ht)
{
    std::strncpy(firstname, fn, LIM - 1);
    firstname[LIM-1] = '\0';
    std::strncpy(lastname, ln, LIM - 1);
    lastname[LIM - 1] = '\0';
    hasTable = ht;
}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}