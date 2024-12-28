//
// Created by 肖鹏楊 on 24-12-21.
//

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>  //将Stack定义为模板类（出现报错“Stack” is not a template）
class Stack {
private:
    std::vector<T> data; //使用vector容器存栈

public:
    //创建栈
    Stack() {
        data.clear();
    }

    //读取栈顶元素
    T topMember() const {
        if (data.empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return data.back();
    }

    //清空栈
    void clear() {
        data.clear();
    }

    //从栈顶增加元素
    void push(const T& value) {
        data.push_back(value);
    }

    //从栈顶弹出元素
    void pop() {
        if (data.empty()) {
            throw std::out_of_range("栈已空");
        }
        data.pop_back();
    }

    //检查栈是否为空
    [[nodiscard]] bool isEmpty() const {
        return data.empty();
    }

    //获取栈的大小
    [[nodiscard]] size_t size() const {
        return data.size();
    }
};

void test01();


#endif //STACK_H
