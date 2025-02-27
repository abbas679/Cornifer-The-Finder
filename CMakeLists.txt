cmake_minimum_required(VERSION 3.10)
project(Cornifer-The-Finder)

set(CMAKE_CXX_STANDARD 14)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# List all source files
add_executable(cornifer 
    src/main.cpp 
    src/file_search.cpp
    include/file_search.h  # <-- Explicitly include header
)
