#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}