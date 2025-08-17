#include <iostream>
#include <array>

/* void PrintArray(int* arr, unsigned int size) {

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

} */


void PrintArray(const std::array<int, 5>& data) {

    for(int i = 0; i < data.size(); i++) {
        std::cout << data[i] << " ";
    }

}

int main() {

    std::array<int, 5> data;
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;
    data[3] = 4;
    data[4] = 5;

    PrintArray(data);

    return 0;
}