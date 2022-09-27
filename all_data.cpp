#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{
    std::ofstream file;
    file.open("lol.txt");
    for (auto &p : std::filesystem::recursive_directory_iterator("/"))
    { 
        std::cout << p.path() << std::endl;
        file << p.path() << std::endl;
    }
    file.close();
    return 0;
}