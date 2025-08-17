#include <iostream>


class Entity {
    private:
        std::string m_Name;

    public:
        Entity() 
            : m_Name("Unknown") {

        }

        Entity(const std::string& name)
            : m_Name(name) {

        }

        const std::string& GetName() const {
            return m_Name;
        }
};

int main() {

    Entity e1;
    std::cout << e1.GetName() << std::endl;

    Entity* e2;
    {
        Entity entity("John"); // on stack
        e2 = &entity;
        std::cout << entity.GetName() << std::endl;
    }


    return 0;

}