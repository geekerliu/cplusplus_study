//
//  main.cpp
//  textin1
//
//  Created by LiuWei on 15/11/15.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    char ch;
    int count = 0;
    
#if 0
    cout << "enter # to quit:\n";
    cin >> ch;
    while (ch != '#') {
        cout << ch;
        ++count;
        // cin在读取char时和读取其它类型一样，会忽略空格和换行符。
        // 发送给cin的数据被缓冲直到输入回车才发送给程序处理
        cin >> ch;
    }
    //    enter # to quit:
    //    see ken run#really fast
    //    seekenrun
    //    9 characters read
    //    Program ended with exit code: 0
#endif
#if 0
    // 使用cin.get可以读取空格、制表符、换行符
    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);
    }
//    enter # to quit:
//    see ken run#
//    see ken run
//    11 characters read
#endif
    cin.get(ch);
    //while (cin.fail() == false) {//test the EOF
    while (cin.get(ch)) {//简单的写法，效果与上一句相同
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}
