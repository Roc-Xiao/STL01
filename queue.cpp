//
// Created by 91675 on 2024/12/24.
//

#include "queue.h"


using namespace std;

//以下搬运菜鸟网站的模拟实现程序
void test02() {
    // 创建一个整数队列
    Queue<int> q;

    // 向队列中添加元素
    q.push(10);
    q.push(20);
    q.push(30);

    // 打印队列中的元素数量
    cout << "队列中的元素数量: " << q.size() << std::endl;

    // 打印队首元素
    cout << "队首元素: " << q.front() << std::endl;

    // 打印队尾元素
    cout << "队尾元素: " << q.back() << std::endl;

    // 移除队首元素
    q.pop();
    cout << "移除队首元素后，队首元素: " << q.front() << std::endl;

    // 再次打印队列中的元素数量
    cout << "队列中的元素数量: " << q.size() << std::endl;
}