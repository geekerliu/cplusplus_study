//
//  main.cpp
//  strings
//
//  Created by LiuWei on 15/11/14.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    using namespace std;
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owboy";
    
    cout << "Howdy! i'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << endl;
    cout << "size=" << sizeof(name1) << endl;
    name2[3] = '\0';
    cout << name2 << endl;
    return 0;
}
