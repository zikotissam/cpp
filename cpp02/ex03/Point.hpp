#ifndef POINT
#define POINT
#include <iostream>
#include <cmath>
#include"Fixed.hpp"

class Point
{
    private :
        const Fixed x;
        const Fixed y;
    public :
        Point();
        ~Point();
        Point(const float x, const float y);
        Point(const Point& copy);
		Point &operator=(const Point &src);
        const Fixed &getX()const;
        const Fixed &getY()const;

};

#endif