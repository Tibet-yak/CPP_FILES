#include <iostream>
#include <string>

class MyClass {
    private:
        float x, y, z;
    public:
        MyClass(float a, float b, float c)
            : x(a), y(b), z(c) {}
        void print() {
            std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
        }
};


int main() {

    //stack memory
    int a = 10;
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    MyClass obj(1.0, 2.0, 3.0);



    //heap memory, new use malloc()
    int* ha = new int;
    *ha = 10;

    int* harray = new int[5];
    harray[0] = 1;
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;

    MyClass* hobj = new MyClass(1.0, 2.0, 3.0);

    //delete heap memory
    delete ha;
    delete[] harray;
    delete hobj;

    return 0;

}