#include <iostream>

int main() {

    int examples[100];

    for (int i = 0; i < 100; i++) {
        examples[i] = i;
        std::cout << examples[i] << " ";
    }

    //数据在内存中的分布
    int* ptr = examples;
    std::cout << *(ptr + 2) << std::endl;
    *(ptr +2) =100;
    std::cout << *(ptr + 2) << std::endl;
    *(int*)((char*)ptr +8) =88;
    std::cout << *(ptr + 2) << std::endl;   

    //在堆上创建数组
    for(int j=0;j<100;j++){
        examples[j] = j;
    }
    int* ptr2 = new int[100];
    for(int k=0;k<100;k++){
        ptr2[k] = k;
    }

    delete[] ptr2;

    return 0;



}