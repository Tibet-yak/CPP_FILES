#include <iostream>


#ifdef DEBUG == 1
    #define LOG(x) std::cout << x << std::endl
#else
    #define LOG(x)
#endif



int main() {

    LOG("Hello, world!");
    LOG(12);

    return 0;

}