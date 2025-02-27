#include "file_search.h"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

std::vector<std::string> FileSearch::searchFiles(const std::string& directory, const std::string& filename) {
    std::vector<std::string> results;
    
    try {
        for (const auto& entry : fs::recursive_directory_iterator(directory)) {
            if (entry.path().filename() == filename) {
                results.push_back(entry.path().string());
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return results;
}
