#include <iostream>
#include <string>
#include <vector>

struct Vertex {

    float x, y, z;

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
    stream << "(" << vertex.x << "," << vertex.y << "," << vertex.z << ")";
    return stream;
}



int main() {
    
    std::vector<Vertex> vertices;
    vertices.push_back({1.0, 2.0, 3.0});
    vertices.push_back({4.0, 5.0, 6.0});

    for(int i = 0; i < vertices.size(); i++) {
        std::cout << vertices[i] << std::endl;
    }


    for(Vertex v: vertices) {
        std::cout << v << std::endl;
    }

    vertices.erase(vertices.begin() + 1);


    // don't copy 
    for(const Vertex& v: vertices) {
        std::cout << v << std::endl;
    }

    vertices.clear();




    return 0;
}