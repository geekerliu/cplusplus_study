//
//  main.cpp
//  strtype1
//
//  Created by LiuWei on 15/11/15.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    using namespace std;
    // string 具有自动调整大小的功能,因此更安全
    string str1;
    string str2 = "panther";
    str1 = str2;
    cout << "str2 len=" << str2.length() << endl;
    cout << "str2 size=" << str2.size() << endl;
    return 0;
}
