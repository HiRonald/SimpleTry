//
// Created by Ronald on 2025/8/31.
//
#include <iostream>
#include "math_utils.h"

int main() {
    int a = 7, b = 5;
    std::cout << "Result: sum(" << a << "+" << b << ")="
            << math_utils::add(a, b) << std::endl;
    int c = 72, d = 5;
    std::cout << "Result: sum(" << c << "+" << d << ")="
            << math_utils::add(d, c) << std::endl;
}
