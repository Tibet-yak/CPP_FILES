#include <iostream>

class Base {
    public:
    Base() {}
    virtual ~Base() {}
};

class Derived : public Base {
    public:
    Derived() {}
    ~Derived() {}
};

class AnotherClass : public Base {
    public:
    AnotherClass() {}
    ~AnotherClass() {}
};



int main() {
    double var = 5.25;
    double b = (int)var + 3.14;
    std::cout << "b = " << b << std::endl;

    // static cast
    double s = static_cast<int>(var) + 3.14;
    std::cout << "s = " << s << std::endl;

    // reinterpret cast
    //double r = reinterpret_cast<AnotherClass*>(&var) + 3.14;
    //std::cout << "r = " << r << std::endl;

    // dynamic cast
    Derived* d = new Derived();
    Base* base = d;
    Derived* ac = dynamic_cast<Derived*>(base);
    if(ac) {
        std::cout << "ac = " << ac << std::endl;
    } else {
        std::cout << "ac = NULL" << std::endl;
    }

    // const_cast



    return 0;
}