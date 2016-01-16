//
//  tabtenn0.hpp
//  c++study
//
//  Created by LiuWei on 16/1/13.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#ifndef tabtenn0_hpp
#define tabtenn0_hpp

#include <stdio.h>
class TableTennisPlayer
{
private:
    enum {LIM = 20};
    char firstname[LIM];
    char lastname[LIM];
    bool hasTable;
public:
    TableTennisPlayer(const char * fn = "none",
                      const char * ln = "none", bool ht = false);
    void Name()const;
    bool HasTable()const {return hasTable;};
    void ResetTable(bool v) { hasTable = v;};
};

#endif /* tabtenn0_hpp */
