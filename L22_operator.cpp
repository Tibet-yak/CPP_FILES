#include <iostream>

struct Vector2 {
    float x, y;

    Vector2(float x, float y)
        : x(x), y(y) {}

    Vector2 Add(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator+(const Vector2& other) const {
        return Add(other);

    }

    Vector2 Multiply(const Vector2& other) const {
        return Vector2(x * other.x, y * other.y);
    }

    Vector2 operator*(const Vector2& other) const {
        return Multiply(other);
    }

    bool operator==(const Vector2& other) const {
        return x == other.x && y == other.y;
    }

};


// Define << operator
std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
    stream << other.x << "," << other.y;
    return stream;

}

int main() {

    // Declare two vectors
    Vector2 position(4.0f,5.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    // Add the vectors and store the result in a new vector(not c++ style)
    Vector2 result1 = position.Add(speed.Multiply(powerup));
    // Add the vectors and store the result in a new vector(c++ style)
    Vector2 result2 = position + speed * powerup;

    std::cout << result2 << std::endl;

    if(result1 == result2) {
        // Do something if the results are equal

    }

    return 0;


}