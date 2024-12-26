//
// Created by 91675 on 2024/12/24.
//

#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <unordered_map>
#include <memory>

class Map {
private:
    std::unordered_map<int, int> data;  //使用哈希表实现映射(没报错那应该就这样用的）

public:
    //创建映射
    Map() {
        data.clear();
    }

    //访问指定的键值对
    int* operator[](int key) {
        return &data[key];
    }

    //删除键值对
    void remove(int key) {
        data.erase(key);
    }

    //清空映射
    void clear() {
        data.clear();
    }

    //输出映射内容
    void print() {
        for (const auto& pair : data) {
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }

};
    void test03();

#endif //MAP_H
