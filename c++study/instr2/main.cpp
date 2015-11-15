//
//  main.cpp
//  instr2
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
    
    cout << "name:\n";
    cin.getline(name, arsize);
    cout << "dessert:\n";
    cin.getline(dessert, arsize);
    cout << "dessert=" << dessert;
    cout << "name=" << name << endl;
    return 0;
}
