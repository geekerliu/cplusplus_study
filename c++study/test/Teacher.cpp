//
//  Teacher.cpp
//  c++study
//
//  Created by LiuWei on 15/12/6.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include "Teacher.hpp"

//初始化列表
Teacher::Teacher(string name, int age, int max):m_strName(name),m_iAge(age),m_iMax(max)
{
    cout<<"Teacher::Teacher(string name, int age)"<<endl;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setName(string name)
{
    m_strName = name;
}

int Teacher::getAge()
{
    return m_iAge;
}

void Teacher::setAge(int age)
{
    m_iAge = age;
}

int Teacher::getMax()
{
    return m_iMax;
}