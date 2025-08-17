#include <iostream>

class Player {
public:
    std::string name;
    int health;

    Player() {
        name = "John";
        health = 95;
        std::cout << "Player constructor called" << std::endl;
    }

/*     Player(std::string name, int health) {
        this->name = name;
        this->health = health;
    } */

    ~Player() {
        std::cout << "Player destructor called" << std::endl;
    }
};

int main() {

   
    Player player1;
    std::cout << "Player 1 name: " << player1.name << std::endl;
    std::cout << "Player 1 health: " << player1.health << std::endl;

/*     Player player2("Alice", 80);
    std::cout << "Player 2 name: " << player2.name << std::endl;
    std::cout << "Player 2 health: " << player2.health << std::endl; */

    return 0;


}