//
//  main.cpp
//  sumafile
//
//  Created by LiuWei on 15/11/21.
//  Copyright © 2015年 AppCoda. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main(int argc, const char * argv[]) {
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "file name:";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "could not open the file"<<filename<<endl;
        cout<<"program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    
//    inFile >> value;
//    while (inFile.good()) {
//        ++count;
//        sum += value;
//        inFile >> value;
//    }
    //简写上面的代码
    while (inFile >> value) {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof()) {
        cout << "end of file reached.\n";
    }
    else if (inFile.fail()) {
        cout << "input terminated by data mismatch.\n";
    }
    else {
        cout << "input terminated for unknown reason.\n";
    }
    if (count == 0) {
        cout << "No data processed.\n";
    }
    else {
        cout << "Items read:" << count << endl;
        cout << "sum:"<< sum << endl;
        cout << "average:" << sum/count<<endl;
    }
    inFile.close();
    return 0;
}
