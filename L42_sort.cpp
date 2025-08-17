#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>


int main() {
    std::vector<int> valuse = {5, 3, 8, 4, 2, 7, 1, 6};
    //std::sort(valuse.begin(), valuse.end());
    //std::sort(valuse.begin(), valuse.end(), std::greater<int>());
    std::sort(valuse.begin(), valuse.end(), [](int a, int b) { 
        if(a==1)
            return false;
        if(b==1)
            return true;

        return a < b;        
    });

    for(int value : valuse) {
        std::cout << value << std::endl;
    }


    std::cin.get();


}