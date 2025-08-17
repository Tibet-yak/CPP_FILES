#include <iostream>

class Entity {
    public:
    Entity() {
        std::cout << "Entity created" << std::endl;
    }
    ~Entity() {
        std::cout << "Entity destroyed" << std::endl;
    }
};

class scopedPtr {
    private:
        Entity* m_ptr;
    public:
        scopedPtr(Entity* ptr) 
        : m_ptr(ptr) {

        }

        ~scopedPtr() {
            delete m_ptr;
        }
};


int main() {

    {
        //Entity e1; // create an Entity object on the stack

        //Entity* e1 = new Entity(); // create an Entity object on the heap
        //delete e1; // destroy the Entity object on the heap

        scopedPtr e1(new Entity()); // create an Entity object on the heap and destroy it when the scope ends


    }

    return 0;

}