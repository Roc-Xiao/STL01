//
// Created by 91675 on 2024/12/24.
//

#ifndef LIST_H
#define LIST_H

#include <iostream>

class List {
private:
    struct Node {
        int value;
        Node* next;
        Node* prev;

        Node(int v) : value(v), next(nullptr), prev(nullptr) {

        }
    };

    Node* head;  // 头节点（虚节点）
    Node* tail;  // 尾节点

public:
    // 创建链表，头节点是虚节点
    List() {
        head = new Node(0);  // 初始化虚头节点
        tail = head;         // 尾节点初始指向头节点
    }

    // 在指定位置插入元素（索引位置）
    void insert(int index, int value) {
        Node* newNode = new Node(value);
        Node* cur = head;
        for (int i = 0; i < index && cur->next != nullptr; ++i) {
            cur = cur->next;
        }

        newNode->next = cur->next;
        if (cur->next != nullptr) {
            cur->next->prev = newNode;
        }
        cur->next = newNode;
        newNode->prev = cur;
    }

    // 删除指定位置的元素（索引位置）
    void remove(int index) {
        Node* cur = head->next;
        for (int i = 0; i < index && cur != nullptr; ++i) {
            cur = cur->next;
        }

        if (cur != nullptr) {
            if (cur->next != nullptr) {
                cur->next->prev = cur->prev;
            }
            cur->prev->next = cur->next;
            delete cur;
        }
    }

    // 销毁链表
    void clear() {
        Node* cur = head;
        while (cur != nullptr) {
            Node* temp = cur;
            cur = cur->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    // 打印链表
    void print() {
        Node* cur = head->next;
        while (cur != nullptr) {
            std::cout << cur->value << " ";
            cur = cur->next;
        }
        std::cout << std::endl;
    }

};
    void test04();

#endif //LIST_H
