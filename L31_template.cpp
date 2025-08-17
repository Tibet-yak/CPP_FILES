#include <iostream>

//example 1
/* template<typename T>
void Print(T value) {
    std::cout << value << std::endl;    
}

int main() {    

    Print("Hello, world!");
    Print(123);
    Print(3.14);
    return 0;


}

 */

//example 2

template<int size>

class MyClass {
    private:
        int m_Array[size];
    public:
        int GetSize() const {
            return size;
        }
};


int main() {    

    MyClass<5> myObj;
    std::cout << "Size of myObj is " << myObj.GetSize() << std::endl;

    return 0;


}
