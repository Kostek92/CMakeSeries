#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <concepts>
#include <iostream>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{
    std::cout << "This is template c++20 project add function\n";
    return a + b;
}

double add(double a, double b);

#endif