//
//  usett0.cpp
//  c++study
//
//  Created by LiuWei on 16/1/16.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#include <iostream>
#include "tabtenn0.hpp"
#include "tabtenn1.hpp"
#include "brass.hpp"
#include "test.hpp"

int main()
{
#if 0 
    // 第一个例子的测试程序
    using std::cout;
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable()) {
        cout << ": has a table.\n";
    } else {
        cout << ": hasn't a table.\n";
    }
    player2.Name();
    if (player2.HasTable()) {
        cout << ": has a table.\n";
    } else {
        cout << ": hasn't a table.\n";
    }
#endif
#if 0
    // 第二个例子的测试程序
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();
    if (rplayer1.HasTable()) {
        cout << ": has a table.\n";
    } else {
        cout << ": hasn't a table.\n";
    }
    player1.Name();
    if (player1.HasTable()) {
        cout << ": has a table.\n";
    } else {
        cout << ": hasn't a table.\n";
    }
    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
#endif
#if 0
    // 第三个例子的测试程序
    using std::cout;
    using std::endl;
    
    Brass Piggy("Procelot Pigg",381299,4000.00);
    BrassPlus Hoggy("Horatio Hogg",382288,3000.00);
    Piggy.ViewAcct();
    cout<<endl;
    Hoggy.ViewAcct();
    cout<<endl;
    
    cout<<"Depositing $1000 into the Hogg Accout: \n";
    Hoggy.Deposit(1000.00);
    cout<<"New balance: $"<<Hoggy.Balance()<<endl;
    cout<<"Withdrawing $4200 from the Pigg Account: \n";
    Piggy.Withdraw(4200.00);
    cout<<"Pigg account balance: $"<<Piggy.Balance()<<endl;
    cout<<"Withdrawing $4200 from the Hogg Account: \n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
#endif
#if 0
    // 第四个例子的测试程序
    const int CLIENTS =4;
    const int LEN=40;
    using std::cin;
    using std::cout;
    using std::endl;
    Brass *p_clients[CLIENTS];
    
    int i;
    for (i=0; i<CLIENTS; i++) {
        char temp[LEN];
        long tempnum;
        double tempbal;
        char kind;
        cout<<"Enter client's name:";
        cin.getline(temp, LEN);
        cout << "Enter client's account number: ";
        cin >> tempnum;
        cout << "Enter opening balance: $";
        cin >> tempbal;
        cout << "Enter 1 for Brass Account or "
        << "2 for BrassPlus Account: ";
        while (cin >> kind && (kind != '1' && kind != '2'))
            cout <<"Enter either 1 or 2: ";
        if (kind == '1'){
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        }else{
            double tmax, trate;
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            cout << "Enter the interest rate "
            << "as a decimal fraction: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
                                         tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->ViewAcct();
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i];  // free memory
    }
    cout << "Done.\n";
#endif
    Dwelling a;
    Hovel b;
    b.showperks(1);
    //b.showperks();该函数被隐藏了，不能被访问
    
    
    return 0;
}



