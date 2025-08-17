#include <iostream>
#include <thread>

static bool g_running = true;

void DoWork() {

    using namespace std::literals::chrono_literals;

    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

    while (g_running)
    {
        std::cout << "Working...\n" << std::endl;
        std::this_thread::sleep_for(1s);
    }
}


int main() {

    std::thread worker(DoWork);

    std::cin.get();
    g_running = false;
    
    worker.join();
    std::cout << "Done.\n" << std::endl;
    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

    std::cin.get();




}