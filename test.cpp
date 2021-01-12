
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include<iostream>
// Objects
#include<Rectangle.hpp>
#include<Square.hpp>
#include<Circle.hpp>

int main ()
{
    Rectangle *rect = new Rectangle (10, 5);
    std::cout << "rectangle size: 10x5 cm, area: " << rect->area() << " cm2." << std::endl;
    Square *sq = new Square (5);
    std::cout << "square side: 5 cm, area: " << sq->area() << " cm2." << std::endl;
    Circle *circ = new Circle (5);
    std::cout << "Circle radius: 5 cm, area: " << sq->area() << " cm2." << std::endl;
    delete rect; rect = nullptr;
    delete sq; sq = nullptr;
    delete circ; circ = nullptr;
    return 0;
}