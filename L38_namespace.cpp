#include <iostream>
#include <vector>
#include <algorithm>

namespace apple {
    void print(const char* message) {
        std::cout << message << std::endl;
    }
}

namespace orange {
    void print(const char* message) {
        std::string temp = message;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
}




int main() {

    apple::print("Hello, world!");
    orange::print("Hello, world!");


}