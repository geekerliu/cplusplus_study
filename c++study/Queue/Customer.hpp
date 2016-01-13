//
//  Customer.hpp
//  c++study
//
//  Created by LiuWei on 16/1/9.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <iostream>

class Customer {
private:
    long arrive;
    int processtime;
public:
    Customer(){ arrive = processtime = 0;}
    void set (long when);
    long when()const { return arrive; }
    int ptime()const { return processtime; }
};

#endif /* Customer_hpp */
