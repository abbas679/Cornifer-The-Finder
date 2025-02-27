#ifndef FILE_SEARCH_H
#define FILE_SEARCH_H

#include <vector>
#include <string>

class FileSearch {
public:
    static std::vector<std::string> searchFiles(const std::string& directory, const std::string& filename);
};

#endif // FILE_SEARCH_H
