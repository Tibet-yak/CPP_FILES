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

    int a = 10;
    int* b = new int; // allocate 4 bytes of memory for an integer on the heap
    int* c = new int[10]; // allocate 40 bytes of memory for an array on the heap

    Entity* e = new Entity; // allocate memory for an Entity object on the heap
    Entity* g = (Entity*)malloc(sizeof(Entity)); //未调用构造函数，直接分配内存，需要手动调用构造函数

    Entity* f = new Entity[20]; // allocate memory for an Entity object on the heap

    delete b; // deallocate memory for the integer and array
    delete[] c;
    delete e, g; // deallocate memory for the Entity objects
    delete[] f;


    return 0;

}