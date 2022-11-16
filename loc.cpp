#include <filesystem>
#include <iostream>
#include <fstream>

int main()
{
    int total = 0;
    for (const auto& entry : std::filesystem::recursive_directory_iterator("lib"))
    {
        if (entry.path().extension() == ".ex")
        {
            std::ifstream f(entry.path());
            std::string line;
            while (std::getline(f, line))
            {
                total++;
            }
        }
    }
    std::cout << "Total lines: " << total << std::endl;
    return 0;
}
