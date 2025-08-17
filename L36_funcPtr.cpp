#include <iostream>
#include <vector>

 
void forEach(const std::vector<int>& values, void (*func)(int)) {
    for(int value : values)
        func(value);

}


int main() {

    std::vector<int> values = {1, 2, 3, 4, 5};
    forEach(values, [](int a){std::cout << a << std::endl;});


    return 0;


}