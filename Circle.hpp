#ifndef __CIRCLE_HPP
#define __CIRCLE_HPP

/**
 * CS-17, Utilities.hpp
 * This class represent a circle
 * 
 * 
 * @author Christophe Gattardi
 * @version 1.0 10/01/2021
 */

class Circle
{
    double m_radius;
    double m_pi = 3.141592654;
    public:
        /**
         * @brief Construct a new Circle object
         * 
         * @param iRadius double: radius of the Circle
         * 
         */
        Circle (const double &iRadius);
        virtual ~Circle ();
        /**
         * @brief Compute the area of the Circle
         * 
         * @return double 
         */
        virtual double area ();
        /**
         * @brief Compute the perimeter of the Circle
         * 
         * @return double 
         */
        virtual double perimeter ();
};

#endif //__CIRCLE_HPP
