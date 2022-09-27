#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

int main()
{
    while (true)
    {
        std::chrono::system_clock::time_point today = std::chrono::system_clock::now();
        time_t tt;
        tt = std::chrono::system_clock::to_time_t(today);
        std::cout << std::ctime(&tt);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}