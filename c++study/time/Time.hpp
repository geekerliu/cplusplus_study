//
//  Time.hpp
//  c++study
//
//  Created by LiuWei on 15/12/13.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    friend Time operator*(double n, const Time &t);
    Time operator*(double n) const;
    void Show() const;
};

#endif /* Time_hpp */
