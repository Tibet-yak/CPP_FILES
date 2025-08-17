#include <iostream>

int main() {

    int var1 = 10;
    std::cout << "var1 = " << var1 << "\tsizeof(int) = " << sizeof(var1) << std::endl;   

    char var2 = 'a';
    std::cout << "var2 = " << var2 << "\tsizeof(char) = " << sizeof(var2) << std::endl;   

    float var3 = 3.14f;
    std::cout << "var3 = " << var3 << "\tsizeof(float) = " << sizeof(var3) << std::endl;   

    double var4 = 2.71828;
    std::cout << "var4 = " << var4 << "\tsizeof(double) = " << sizeof(var4) << std::endl;   

    long var5 = 1000000000000000000;
    std::cout << "var5 = " << var5 << "\tsizeof(long) = " << sizeof(var5) << std::endl;   

    long long var6 = 1000000000000000000;
    std::cout << "var6 = " << var6 << "\tsizeof(long long) = " << sizeof(var6) << std::endl;   

    bool var7 = true;
    std::cout << "var7 = " << var7 << "\tsizeof(bool) = " << sizeof(var7) << std::endl;   

    unsigned int var8 = 10;
    std::cout << "var8 = " << var8 << "\tsizeof(unsigned int) = " << sizeof(var8) << std::endl;   

    char var9 = 100;
    std::cout << "var9 = " << var9 << "\tsizeof(char) = " << sizeof(var9) << std::endl;   

    bool* var10 = &var7;
    std::cout << "var10 = " << *var10 << "\tsizeof(bool*) = " << sizeof(var10) << std::endl;   

    return 0;    
    
}