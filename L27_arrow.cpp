#include <iostream>
#include <cstring>

class Entity {
    public:
        void print() const {
            std::cout << "print" << std::endl;
        }
};

class ScopedEntity {
    private:
        Entity* m_Obj;
    public:
        ScopedEntity(Entity* obj) 
            : m_Obj(obj) {
        }

        ~ScopedEntity() {
            delete m_Obj;
        }
        
        Entity* operator->() {
            return m_Obj;
        }
 };


int main() {

    ScopedEntity entity = new Entity();
    entity->print();


    return 0;

}