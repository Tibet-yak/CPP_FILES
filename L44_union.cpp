#include <iostream>

struct Vector2 {
    float x, y;
};

struct Vector4 {
/*     float x, y, z, w;

    Vector2& GetA() {
        return *(Vector2*)&x; */

    union {
        struct {
            float x, y, z, w;
        };

        struct {
            Vector2 a, b;
        };
    };
};

void PrintVector2(const Vector2& v) {
    std::cout << v.x << "," << v.y << std::endl;
}


int main() {

/*     struct Union {
        union {
            float a;
            int b;
        };
    };

    Union u;
    u.a = 3.14;
    std::cout << u.a << "," << u.b << std::endl;
 */

    Vector4 v4 = {1.0f, 2.0f, 3.0f, 4.0f};
    PrintVector2(v4.a);
    PrintVector2(v4.b);

    v4.z = 500.0f;
    std::cout << "--------------------" << std::endl;
    PrintVector2(v4.a);
    PrintVector2(v4.b);
    return 0;



}