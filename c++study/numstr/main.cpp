//
//  main.cpp
//  numstr
//
//  Created by LiuWei on 15/11/15.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "year?\n";
    int year;
    cin >> year;
    cin.get();//将末尾的换行符读取掉
    cout << "address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "year=" << year  << endl;
    cout << "address=" << address << endl;
    
    return 0;
}
