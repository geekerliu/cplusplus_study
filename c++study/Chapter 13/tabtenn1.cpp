//
//  tabtenn1.cpp
//  c++study
//
//  Created by LiuWei on 16/1/16.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#include "tabtenn1.hpp"

RatedPlayer::RatedPlayer(unsigned int r, const char * fn,
                         const char * ln, bool ht):TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp):TableTennisPlayer(tp),rating(r)
{
    
}


