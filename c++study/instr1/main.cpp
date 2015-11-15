//
//  main.cpp
//  instr1
//
//  Created by LiuWei on 15/11/14.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    const int arsize = 20;
    char name[arsize];
    char dessert[arsize];
    
    cout << "enter your nmae:\n";
    // cin 使用空白（空格、制表符和换行符）来确定字符串的结束的位置。
    //所以输入liu wei时，此处有问题。
    cin >> name;
    cout << "enter your dessert:\n";
    cin >> dessert;
    cout<< "dessert="<< dessert << "name=" << name << endl;
    return 0;
}
