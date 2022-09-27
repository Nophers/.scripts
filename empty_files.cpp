#include <iostream>
#include <string>
#include <filesystem>
#include <algorithm>

namespace fs = std::filesystem;

int main() {
    std::for_each(fs::recursive_directory_iterator("/"), fs::recursive_directory_iterator(), [](const fs::directory_entry& e) {
        if (fs::is_regular_file(e) && fs::file_size(e) == 0) {
            fs::remove(e.path());
            std::cout << "Deleted: " << e.path() << std::endl;
        }
    });
}