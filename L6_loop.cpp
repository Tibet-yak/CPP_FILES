#include <iostream>

int main() {

    //for loop
    for(int i=0; i<10; i++){
        std::cout << i << " ";    
    }

    //while loop
    int j = 0;
    while(j < 5){
        std::cout << "Hello World" << std::endl;
        j++;
    }

    //do-while loop
    int k = 0;
    do{
        std::cout << "do-while loop" << std::endl;
        k++;
    }while(k < 5);

    return 0;


}