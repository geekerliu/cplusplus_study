//
//  Customer.cpp
//  c++study
//
//  Created by LiuWei on 16/1/9.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#include "Customer.hpp"

void Customer::set(long when)
{
    // 平均处理时间1-2分钟
    processtime = std::rand()%3 +1;
    // 到达的时间
    arrive = when;
}