//
//  tabtenn1.hpp
//  c++study
//
//  Created by LiuWei on 16/1/16.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#ifndef tabtenn1_hpp
#define tabtenn1_hpp

#include <iostream>
#include "tabtenn0.hpp"

class RatedPlayer: public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const char * fn = "none",
                const char * ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating(){ return rating; }
    void ResetRating(unsigned int r){ rating = r; }
};

#endif /* tabtenn1_hpp */
