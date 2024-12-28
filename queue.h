#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <deque>
#include <stdexcept>

template <typename T>
class Queue {
private:
    std::deque<T> container;  // 使用 deque 作为底层容器

public:
    // 构造函数
    Queue() = default;

    // 入队操作
    void push(const T& value) {
        container.push_back(value);
    }

    // 出队操作
    void pop() {
        if (empty()) {
            throw std::out_of_range("Queue is empty");
        }
        container.pop_front();
    }

    // 获取队首元素
    T& front() {
        if (empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return container.front();
    }

    // 获取队尾元素
    T& back() {
        if (empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return container.back();
    }

    // 检查队列是否为空
    bool empty() const {
        return container.empty();
    }

    // 获取队列中的元素数量
    size_t size() const {
        return container.size();
    }

    // 打印队列元素（调试用）
    void print() const {
        for (const auto& elem : container) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    // 析构函数，使用默认的 deque 析构
    ~Queue() = default;
};

void test02();

#endif // QUEUE_H
