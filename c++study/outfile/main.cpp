//
//  main.cpp
//  outfile
//
//  Created by LiuWei on 15/11/21.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
#include <fstream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    ofstream outFile;
    //默认没有该文件则创建该文件，有则截短为0
    outFile.open("/Users/liuwei/cplusplus_study/c++study/outfile/carinfo.txt");
    
    cout << "Enter the make and model:";
    cin.getline(automobile, 50);
    cout << "Enter year:";
    cin >> year;
    cout << "price:";
    cin >> a_price;
    d_price = 0.913 * a_price;
    
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "make and model:" << automobile << endl;
    cout << "year:" << year << endl;
    cout << "was asking $" << a_price << endl;
    cout << "now asking $" << d_price << endl;
    
    outFile << fixed;
    outFile.precision(2);//精度保留小数点后两位
    outFile.setf(ios_base::showpoint);//?
    outFile << "make and model:" << automobile << endl;
    outFile << "year:" << year << endl;
    outFile << "was asking $" << a_price << endl;
    outFile << "now asking $" << d_price << endl;
    
    outFile.close();
    
    return 0;
}
