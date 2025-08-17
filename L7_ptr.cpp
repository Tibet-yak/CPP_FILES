#include <iostream>
#include <cstring>

int main() {
   /*  int a = 10;
    int* ptr = &a;
    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The address of a is: " << &a << std::endl;
    std::cout << "The value of *ptr is: " << *ptr << std::endl;
    std::cout << "The address of *ptr is: " << ptr << std::endl;
 */
    char* buffer = new char[100];
    memset(buffer, 7, 100);

    char** ptr2 = &buffer;

    delete[] buffer;

    return 0;
}