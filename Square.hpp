#ifndef __SQUARE_HPP
#define __SQUARE_HPP
// //////////////////////////////////////////////////////////////////////
// Import section
// //////////////////////////////////////////////////////////////////////

#include<Rectangle.hpp>

/**
 * CS-17, Utilities.hpp
 * This class represent a Square
 * 
 * 
 * @author Christophe Gattardi
 * @version 1.0 10/01/2021
 */

class Square: public Rectangle
{
    public:
        double m_side;
    public:
        /**
         * @brief Construct a new Square object
         * 
         * @param iSide double: side legnth of the Square
         * 
         */
        Square (const double &iSide);
        virtual ~Square ();
        /**
         * @brief Give informations on the object
         * 
         * @return string 
         */
        virtual std::string info ();
};

#endif //__SQUARE_HPP
