#include <iostream>



int main() {

    // 1D array
    int* a1d = new int[5];
    for(int i=0 ; i<5 ; i++){
        a1d[i] = i;
        std::cout << a1d[i] << std::endl;
    }

    // 2D array
    int** a2d = new int*[5];
    for(int i=0 ; i<5 ; i++){
        a2d[i] = new int[5];
        std::cout << a2d[i] << std::endl;
    }

    // 3D array
    int*** a3d = new int**[5];
    for(int i=0 ; i<5 ; i++){
        a3d[i] = new int*[5];
        for(int j=0 ; j<5 ; j++){
            a3d[i][j] = new int[5];
            std::cout << a3d[i][j] << std::endl;
        }
    }



}