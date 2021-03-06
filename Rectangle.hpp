#ifndef __RECTANGLE_HPP
#define __RECTANGLE_HPP

/**
 * CS-17, Utilities.hpp
 * This class represent a rectangle
 * 
 * 
 * @author Christophe Gattardi
 * @version 1.0 10/01/2021
 */

class Rectangle
{
    double m_height;
    double m_width;
    public:
        /**
         * @brief Construct a new Rectangle object
         * 
         * @param iWidth double: width of the rectangle
         * @param iHeight double: height of the Rectangle
         * 
         */
        Rectangle (const double &iWidth, const double &iHeight);
        virtual ~Rectangle ();
        /**
         * @brief Compute the area of the Rectangle
         * 
         * @return double 
         */
        virtual double area ();
        /**
         * @brief Compute the perimeter of the Rectangle
         * 
         * @return double 
         */
        virtual double perimeter ();
};

#endif //__RECTANGLE_HPP
