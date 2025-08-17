#include <iostream>
#include <vector>

void PrintValue(int a) {
    std::cout << a << std::endl;
}


 
void forEach(const std::vector<int>& values, void (*func)(int)) {
    for(int value : values)
        func(value);

}


int main() {

    std::vector<int> values = {1, 2, 3, 4, 5};
    auto lambda = [](int a){std::cout << a << std::endl;};
    forEach(values, lambda);


    std::cin.get(); 


}