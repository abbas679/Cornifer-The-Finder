#include "file_search.h"

#include <iostream>

int main() {
    std::string directory, filename;
    
    std::cout << "Enter directory to search in: ";
    std::cin >> directory;
    
    std::cout << "Enter filename to search: ";
    std::cin >> filename;

    auto results = FileSearch::searchFiles(directory, filename);

    if (results.empty()) {
        std::cout << "No files found.\n";
    } else {
        std::cout << "Files found:\n";
        for (const auto& file : results) {
            std::cout << file << "\n";
        }
    }

    return 0;
}
