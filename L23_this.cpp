#include <iostream>

class Entity {
    public:
        int x, y;

        Entity(int x, int y) {
            this->x = x;
            this->y = y;
        }

        int GetX() const {

        }

};

void printEntity(const Entity& e) {
    //do something with e


}

int main() {
    Entity e(10, 20);
    printEntity(e);


}