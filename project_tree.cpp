#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void project_tree_of_current_directory(const fs::path &path)
{
    for (auto &p : fs::recursive_directory_iterator(path))
    {
        if (fs::is_directory(p.path()))
        {
            auto level = p.depth();
            auto indent = std::string(level, ' ');
            std::cout << indent << p.path().filename() << '/' << std::endl;
        }
        else
        {
            auto level = p.depth();
            auto subindent = std::string(level, ' ');
            std::cout << subindent << p.path().filename() << std::endl;
        }
    }
}

int main()
{
    project_tree_of_current_directory(fs::current_path());
}