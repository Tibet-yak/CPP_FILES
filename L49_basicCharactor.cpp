#include <iostream>

#define showlist(...) puts(#__VA_ARGS__)

int main() {

    #warning This is a test warning message.

    std::cout << "Hello, world!" << std::endl;

    showlist("This is a macro function.");

    std::cout << __cplusplus << std::endl;
    std::cout << __FILE__ << std::endl;

    // print all ascii characters
    for (int i = 0; i < 128; i++) {
        std::cout << i << " " << (char)i << std::endl;
    }

    for (char c = ' '; c <= '~'; c++) {
        std::cout << c << std::endl;
    }


}