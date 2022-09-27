#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

void delete_empty_folders(fs::path path)
{
    for (const auto &entry : fs::directory_iterator(path))
    {
        if (entry.is_directory())
        {
            if (fs::is_empty(entry))
            {
                fs::remove(entry);
                std::cout << "Deleted: " << entry << std::endl;
            }
            delete_empty_folders(entry);
        }
    }
}

int main()
{
    delete_empty_folders("/");
    return 0;
}