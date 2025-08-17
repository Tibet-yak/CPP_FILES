#include <iostream>

struct Entity {
    int x;
    int y;

    int* GetPosition() {
        return &x;
    }
};



int main() {

/*     int a = 50;
    double b = *(double*)&a;

    std::cout << b << std::endl; */

    Entity e = {10, 20};
    int* position = (int*)&e;
    std::cout << position[0] << "," << position[1] << std::endl;

    int y = *(int*)((char*)&e + 4);
    std::cout << y << std::endl;

    int* position2 = e.GetPosition();
    std::cout << position2[0] << "," << position2[1] << std::endl;



    return 0;




}