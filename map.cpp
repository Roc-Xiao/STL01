//
// Created by 91675 on 2024/12/24.
//

#include "map.h"

using namespace std;

//以下搬运菜鸟网站的模拟实现程序
#include <iostream>
#include <string>

void test03() {
    // 创建一个 map 容器，存储员工的姓名和年龄
    Map<std::string, int> employees;

    // 插入员工信息
    employees["Alice"] = 30;
    employees["Bob"] = 25;
    employees["Charlie"] = 35;

    // 遍历 map 并打印员工信息
    for (std::Map<std::string, int>::iterator it = employees.begin(); it != employees.end(); ++it) {
        std::cout << it->first << " is " << it->second << " years old." << std::endl;
    }

}