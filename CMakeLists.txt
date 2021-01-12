cmake_minimum_required(VERSION 3.0)

project(Shapes)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR})
# C++ library
add_library (Shapes SHARED Rectangle.cpp Square.cpp Circle.cpp)

# Construction of the main programs
add_executable (encapsulation encapsulation.cpp)
target_link_libraries (encapsulation Shapes)
add_executable (polymorphism polymorphism.cpp)
target_link_libraries (polymorphism Shapes)
add_executable (test test.cpp)
target_link_libraries (test Shapes)

# Doxygen
find_package(Doxygen)
set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_LOCAL_METHODS)
doxygen_add_docs(docs)
