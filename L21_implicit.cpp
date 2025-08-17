#include <iostream>
#include <string>

class Entity {
    private:
        std::string m_Name;
        int m_Age;
    public:
        Entity(const std::string& name)
            : m_Name(name) , m_Age(-1) {
            std::cout << "Constructor called with name: " << m_Name << std::endl;

        }

        explicit Entity(int age)
            : m_Name("Unknown") , m_Age(age) {
            std::cout << "Constructor called with age: " << m_Age << std::endl;

        }
};

void printEntity(const Entity& entity) {
    //pass
}


int main() {

//mode 1
    Entity a("John");
    Entity b(25); 

//mode 2
    Entity a1 = Entity("John");
    Entity b1 = Entity(25);   

//mode 3
    //Entity a2 = "John";  //c++11 begin,can't use implicit like this
    Entity b2 = 30;

//mode 4
    printEntity(22);
    //printEntity("John");


// explicit 放在构造函数前，告诉编译器没有隐式转换，必须显示调用构造函数





    return 0;


}