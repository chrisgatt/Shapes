
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include<iostream>
//Objects
#include<Rectangle.hpp>
#include<Square.hpp>
#include<Circle.hpp>

int myType (const Rectangle &rect)
{
    // add your code here
    std::cout << "Je suis un rectangle" << std::endl;
    return 1;
}

int myType (const Circle &circ)
{
    // add your code here
    std::cout << "Je suis un cercle" << std::endl;
    return 3;
}

int main ()
{
    Rectangle rect(10, 5);
    Square sq(5);
    Circle circ(5);
    // add your code here
    std::cout << myType(rect) << std::endl;
    std::cout << myType(sq) << std::endl;
    std::cout << myType(circ) << std::endl;
    return 0;
}