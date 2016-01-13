//
//  Teacher.hpp
//  c++study
//
//  Created by LiuWei on 15/12/6.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Teacher {
public:
    //构造函数
    Teacher(string name = "Jim", int age = 1, int max = 100);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    int getMax();
private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};

#endif /* Teacher_hpp */
