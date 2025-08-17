#include <iostream>
#include <chrono>
#include <thread>

/* 
int main() {

    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << "Time taken by thread: " << duration.count() << " seconds" << std::endl;
    

    std::cin.get();
} */

struct Timer {

    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    std::chrono::duration<float> duration;

    Timer() {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "Time taken by thread: " << ms << " milliseconds" << std::endl;
    }
    
};

void Function() {
    Timer timer;
    for(int i = 0; i < 100; i++) {
        std::cout << i << std::endl;
    }

}


int main() {

    Function();

    std::cin.get();

}