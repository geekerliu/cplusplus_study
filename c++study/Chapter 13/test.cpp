//
//  test.cpp
//  c++study
//
//  Created by LiuWei on 16/1/16.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#include "test.hpp"
#include <iostream>
using namespace std;

void Dwelling::showperks(int a)const
{
    cout<<"showperks(int a)"<<endl;
}
void Dwelling::showperks(double x)const
{
    cout<<"showperks(double x)"<<endl;
}
void Dwelling::showperks()const
{
    cout<<"showperks()"<<endl;
}
///////////////////////////
void Hovel::showperks(int a)const
{
    cout<<"Hovel::showperks(int a)"<<endl;
}