#include <iostream>

class status {
    public:
        float X, Y, Z;

        void move(float dx, float dy, float dz) {
            X += dx;
            Y += dy;
            Z += dz;
        }
};

class Player : public status {
    public:
        const char* name;
        int level;
        
        void print_status() {
            std::cout << "Player " << name << std::endl;
            std::cout << "Level " << level << std::endl;
            std::cout << "Position (" << X << ", " << Y << ", " << Z << ")" << std::endl;
        }   
};

int main() {
    Player player1;
    player1.name = "Alice";
    player1.level = 10;
    player1.X = 10;
    player1.Y = 20;
    player1.Z = 30;
    player1.move(1, 2, 3);
    player1.print_status();

    return 0;
}
