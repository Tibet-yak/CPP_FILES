#include <iostream>

class Example {
    public:
        Example() {
            std::cout << "Created Entity!" << std::endl;
        }

        Example(int x) {
            std::cout << "Created Entity with value " << x << std::endl;
        }
};

class Entity {
    private:
        std::string m_Name;
        Example m_example;

    public:
        Entity() 
            : m_example(10) {
            m_Name = "Horizontal Line";

        }

        Entity(const std::string& name) {
            m_Name = name;

        } 
       
/*         Entity() 
            : m_Name("Unknown") {

        }

        Entity(const std::string& name) 
            : m_Name(name) {

        } */


        const std::string& GetName() const {
            return m_Name;
        }
};

int main() {

    Entity e1;

    return 0;

}