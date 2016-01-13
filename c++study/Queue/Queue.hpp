//
//  Queue.hpp
//  c++study
//
//  Created by LiuWei on 16/1/9.
//  Copyright © 2016年 AppCoda. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "Customer.hpp"

typedef Customer Item;

class Queue {
private:
    enum {Q_SIZE = 10};
    //在类中声明一个结构体，作用域在本类中。
    struct Node { Item item; struct Node *next; };
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    // preemptive definitions to prevent public copying
    Queue(const Queue &q):qsize(0){}//拷贝构造函数
    Queue & operator=(const Queue & q) { return *this; }//赋值构造函数
public:
    Queue (int qs = Q_SIZE);
    ~Queue();
    bool isempty()const;
    bool isfull()const;
    int queuecount()const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};
#endif /* Queue_hpp */
