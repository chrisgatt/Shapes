cmake_minimum_required(VERSION 3.0)

project(Polygons)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR})
# C++ library
add_library (Polygons SHARED Rectangle.cpp Square.cpp)

# Construction of the main programs
add_executable (encapsulation encapsulation.cpp)
target_link_libraries (encapsulation Polygons)
add_executable (polymorphism polymorphism.cpp)
target_link_libraries (polymorphism Polygons)

# Doxygen
find_package(Doxygen)
set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_LOCAL_METHODS)
doxygen_add_docs(docs)
