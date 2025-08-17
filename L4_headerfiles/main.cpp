#include <iostream>
#include "caculator.h"

int main() {
    int a = 10, b = 8;
    std::cout << "a + b = " << add(a, b) << std::endl;
    std::cout << "a - b = " << sub(a, b) << std::endl;
    std::cout << "a * b = " << multiply(a, b) << std::endl;
    std::cout << "a / b = " << divide(a, b) << std::endl;
    return 0;
}