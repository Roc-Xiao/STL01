//
// Created by 肖鹏楊 on 24-12-21.
//

#include "stack.h"
#include <iostream>

// 以下是模拟实现程序
void test01() {
    Stack<int> s;  // 创建一个存储整数的栈

    // 向栈中添加元素
    s.push(1);
    s.push(2);
    s.push(3);

    // 访问栈顶元素
    std::cout << "Top element is: " << s.topMember() << std::endl;

    // 移除栈顶元素
    s.pop();
    std::cout << "After popping, top element is: " << s.topMember() << std::endl;

    // 检查栈是否为空
    if (!s.isEmpty()) {
        std::cout << "Stack is not empty." << std::endl;
    }

    // 打印栈的大小
    std::cout << "Size of stack: " << s.size() << std::endl;
}