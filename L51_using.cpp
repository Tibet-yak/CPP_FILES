#include <iostream>

class Base {
    public:
        void ShowName() {
            std::cout << "Base" << std::endl;
        }
    protected:
        int bValue;
};

class Derived : public Base {
    public:
        using Base::ShowName;  //派生类中引用基类的ShowName方法
        using Base::bValue;    //派生类中引用基类的bValue成员变量
};


int main() {
    using T = int;  //指定别名，等同于typedef int T,可读性更好
    T a = 10;
    std::cout << "a: " << a << std::endl;

    Derived d;
    d.bValue = 10;
    std::cout << "bValue of Derived: " << d.bValue << std::endl;
    d.ShowName();


    return 0;
}