
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////
// STL
#include<iostream>
// Objects
#include<Rectangle.hpp>

int main ()
{
    Rectangle rect(10, 5); // Instanciation of rectangle object
    std::cout << "Rectangle size: 10x5 cm, area: " << rect.area() << " cm2." << std::endl; //compute the area of the rectangle and display it

    // add code here to retrieve width and heigth from object's attributes
    std::cout << "Rectangle width: " << rect.m_width << " height: " << rect.m_height << std::endl;

    return 0;
}