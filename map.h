//
// Created by 91675 on 2024/12/24.
//
#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <unordered_map>
#include <memory>

template <typename KeyType, typename ValueType> //构造Map的类模板
class Map {
private:
    std::unordered_map<KeyType, ValueType> data;

public:
    //创建映射
    Map() {
        data.clear();
    }

    //访问指定的键值对
    ValueType& operator[](const KeyType& key) {
        return data[key];
    }

    //删除键值对
    void remove(const KeyType& key) {
        data.erase(key);
    }

    //清空映射
    void clear() {
        data.clear();
    }

    //输出映射内容
    void print() const {
        for (const auto& pair : data) {
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }

    // 添加begin和end方法，返回迭代器
    typename std::unordered_map<KeyType, ValueType>::iterator begin() {
        return data.begin();
    }

    typename std::unordered_map<KeyType, ValueType>::iterator end() {
        return data.end();
    }

};

void test03();

#endif //MAP_H

