//
// Created by MuLei_SY on 24-6-15.
//
#include <iostream>

int transform(int x) {
    // 获取符号位掩码，负数为-1，正数为0
    int mask = x >> 31;
    // 对于正数，mask为0，不改变x；对于负数，mask为-1，x & ~mask为0
    return x & (~mask);
}

int main() {
    // 测试
    std::cout << transform(-5) << std::endl;  // 输出: 0
    std::cout << transform(5) << std::endl;   // 输出: 5
    std::cout << transform(0) << std::endl;   // 输出: 0
    return 0;
}