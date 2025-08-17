#include <iostream>
#include <memory>


class Entity {
    public:
        Entity() {
            std::cout << "Entity created" << std::endl;
        }

        ~Entity() {
            std::cout << "Entity destroyed" << std::endl;
        }

        void print() {
            std::cout << "print" << std::endl;
        }
};

int main() {

    {
         std::shared_ptr<Entity> e0;
         {
            //std::unique_ptr<Entity> entity = std::make_unique<Entity>();
             std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();   
             std::weak_ptr<Entity> weakEntity = sharedEntity;
             e0 = sharedEntity;

             //entity->print();
         }

    }

    return 0;
}