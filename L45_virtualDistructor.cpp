#include <iostream>

class Base {
    public:
        Base() {
            std::cout << "Base constructor called" << std::endl;
        }
        
        virtual ~Base() {
            std::cout << "Base destructor called" << std::endl;
        }
};


class Derived : public Base {
    private:
        int* m_Array;
    public:
        Derived() {
            m_Array = new int[10];
            std::cout << "Derived constructor called" << std::endl;
        }
        
        ~Derived() {
            delete[] m_Array;
            std::cout << "Derived destructor called" << std::endl;
        }
};


int main() {

    Base* b = new Base();
    delete b;

    std::cout << "-----------" << std::endl;

    Derived* d = new Derived();
    delete d;

    std::cout << "-----------" << std::endl;

    Base* poly = new Derived();
    delete poly;

    return 0;
}