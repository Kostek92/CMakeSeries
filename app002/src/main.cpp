#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "This is c++ 20 project" << std::endl;
    std::cout << "Result of add(3, 6) = " << add(3 , 6) << std::endl;
    return 0;
}