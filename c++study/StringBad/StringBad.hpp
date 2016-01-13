//
//  StringBad.hpp
//  c++study
//
//  Created by LiuWei on 15/12/27.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#ifndef StringBad_hpp
#define StringBad_hpp

#include <iostream>
class StringBad {
private:
    char *str;
    int len;
    static int num_strings;//静态变量，所有的对象共享的变量
public:
    StringBad(const char*s);
    StringBad();
    ~StringBad();
    StringBad(const StringBad &st);
    StringBad & operator=(const StringBad &st);
    friend std::ostream & operator<<(std::ostream &os,
                                     const StringBad &st);
};

#endif /* StringBad_hpp */
