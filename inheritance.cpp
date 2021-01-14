
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include<iostream>
#include<string>
// Objects
#include<Square.hpp>

int main ()
{
    Rectangle *object; // object is a pointer on a Rectangle.
    object = new Square(10); // Create a new square.

    std::string objType = typeid(object).name();
    std::cout << "object est un: " << objType << std::endl;

    delete object; object=nullptr; // We need to delete any object created with new to avoir memory leak. 
    return 0;
}