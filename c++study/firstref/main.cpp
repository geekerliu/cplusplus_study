//
//  main.cpp
//  firstref
//
//  Created by LiuWei on 15/11/23.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int rats = 101;
    int & rodents = rats;//定义一个引用
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    
    cout << "rats address=" << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}
