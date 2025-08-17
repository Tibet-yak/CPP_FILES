#include <iostream>
#include <string>
#include <vector>

struct Vertex {

    float x, y, z;

    Vertex(float x, float y, float z) 
        : x(x), y(y), z(z) {

    }

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z) {
            std::cout << "Copy constructor called" << std::endl;    
    }
};


int main() {
    
    std::vector<Vertex> vertices;
/*     vertices.push_back({1.0, 2.0, 3.0});
    vertices.push_back({4.0, 5.0, 6.0}); */

//show 动态数组运行原理

/*     vertices.push_back(Vertex(1.0, 2.0, 3.0));
    vertices.push_back(Vertex(4.0, 5.0, 6.0)); 
    vertices.push_back(Vertex(7.0, 8.0, 9.0)); 
 */

 //优化

 /*    vertices.reserve(3);
    vertices.push_back(Vertex(1.0, 2.0, 3.0));
    vertices.push_back(Vertex(4.0, 5.0, 6.0)); 
    vertices.push_back(Vertex(7.0, 8.0, 9.0));  */

    // 优化x2
    vertices.reserve(3);
    vertices.emplace_back(1.0, 2.0, 3.0);
    vertices.emplace_back(4.0, 5.0, 6.0); 
    vertices.emplace_back(7.0, 8.0, 9.0);   


    return 0;
}