#include"Point.hpp"

Point::Point(): x(0), y(0){}
Point::~Point(){}
Point::Point(const float x, const float y):x(x), y(y){}
Point::Point(const Point& copy): x(copy.x), y(copy.y){}
Point& Point::operator=(const Point &src){(void)src;return *this;}
const Fixed &Point::getX()const{return(x);}
const Fixed &Point::getY()const{return(y);}
