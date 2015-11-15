//
//  main.cpp
//  waiting
//
//  Created by LiuWei on 15/11/15.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "delay:";
    float secs;
    cin >> secs;
    //CLOCKS_PER_SEC 每秒钟包含的系统时间单位
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay) {
        ;
    }
    cout << "done\a\n";
    
    double prices[5] = {4.99, 10.99, 6.87, 7.99, 1.22};
    for (double x : prices) {
        cout << x << endl;
    }
    return 0;
}
