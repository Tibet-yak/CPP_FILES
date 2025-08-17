#include <iostream>

class Entity {
    private:
        int m_x, m_y; //m_y is still int type
                       //int* m_x, *m_y; //m_y is a pointer type
        mutable int var;
    public:
        int GetX() const {
            //m_x = 2;
            var = 3;
            return m_x;
        }

};

void printEntity(const Entity& e) {
    std::cout << e.GetX() << std::endl;
}



int main() {


    const int x = 5;
    x = 10; // Error: assignment of read-only variable 'x'

    const int MAX_SIZE = 100;



    int*  a = new int; //
    *a = 5;
    std::cout << *a << std::endl; 
    a  = &MAX_SIZE; // Error: assignment of read-only variable 'a'
    a = (int*)&MAX_SIZE; // OK: pointer to const type

    const int*  b = new int; //在int前增加const关键字，讲解a是一个指向常量的指针
    *b = 5;
    b = &MAX_SIZE; // Error: assignment of read-only variable 'b'
    b = (int*)&MAX_SIZE; // OK: const pointer type
    
    //const int* = int const*

    //const在类中的用法
    Entity e;
    e.GetX();

    

     

    return 0;

}