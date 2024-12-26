//
// Created by 91675 on 2024/12/24.
//

#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <deque>

using namespace std;

class Queue {
private:
    deque<int> data;  //将vector优化为deque，更符合队列类的特征

public:
    //创建队列
    Queue() {
        data.clear();
    }

    //访问队头元素
    int front() {
        if (data.empty()) {
            throw out_of_range("队列已空");
        }
        return data.front();
    }

    //入队
    void push(int value) {
        data.push_back(value);
    }

    //出队
    void pop() {
        if (data.empty()) {
            throw out_of_range("队列已空");
        }
        data.pop_front();
    }

    //清空队列
    void clear() {
        data.clear();
    }

    //判断队列是否为空
    bool isEmpty() {
        return data.empty();
    }
};
void test02();


#endif //QUEUE_H
