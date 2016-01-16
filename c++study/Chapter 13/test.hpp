//
//  test.hpp
//  c++study
//
//  Created by LiuWei on 16/1/16.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

#include <iostream>
class Dwelling
{
public:
    virtual void showperks(int a)const;
    virtual void showperks(double x)const;
    virtual void showperks()const;
};
class Hovel:public Dwelling
{
public:
    virtual void showperks(int a)const;
};

#endif /* test_hpp */
