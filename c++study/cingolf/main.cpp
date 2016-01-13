//
//  main.cpp
//  cingolf
//
//  Created by LiuWei on 15/11/15.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
const int Max = 5;
int main(int argc, const char * argv[]) {
    using namespace std;
    int golf[Max];
    cout << "you must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();//停止读取输入
            while (cin.get() != '\n') {//清除错误输入的内容
                continue;
            }
            cout << "please enter a number: ";
        }
    }
    
    double total = 0.0;
    for (i = 0; i < Max; i++) {
        total += golf[i];
    }
    cout << total / Max << " = average score "
        << Max << " rounds\n";
    return 0;
}
