#include <iostream>

class Player {
    public:
        float x, y, z;
        int speed;

        void move(float dx, float dy, float dz) {
        x += dx * speed;
        y += dy * speed;
        z += dz * speed;
    }   
    
};

/* void movePlayer(Player& player, float dx, float dy, float dz) {
    player.x += dx * player.speed;
    player.y += dy * player.speed;
    player.z += dz * player.speed;
}
 */

int main() {

    Player player1;
    player1.x = 10.0;
    player1.y = 20.0;
    player1.z = 30.0;
    player1.speed = 5;
    player1.move(1, 2, 3);

   


    return 0;


}