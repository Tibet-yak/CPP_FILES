#include <iostream>

class Entity {
    public:
        virtual std::string GetName() = 0; // pure virtual function
};

class Player : public Entity {
    private:
        std::string m_name;
    public:
        Player(const std::string& name) : m_name(name) {
            std::cout << "Player constructor called" << std::endl;
        } 

        std::string GetName() override {
            return m_name;
        }

};

int main() {

    Player* p = new Player("John");
    std::cout << p->GetName() << std::endl;

    return 0;


}