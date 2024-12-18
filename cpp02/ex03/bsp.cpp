#include"Point.hpp"
#include"Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p){
    Fixed p1 = (p.getY() - a.getY()) * (c.getX() - a.getX()) - (p.getX() - a.getX()) * (c.getY() - a.getY());
    Fixed p2 = (b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY());
    if(!p2.toFloat())
        return false;
    Fixed w1 = p1 / p2;
    p1 = p.getX() - a.getX() - w1 * (b.getX() - a.getX());
    p2 = c.getX() - a.getX();
    if(!p2.toFloat())
        return false;
    Fixed w2 = p1 / p2;
    return(w1 > 0 && w2 > 0 && w1 + w2 < 1);
}
int main(){
    Point b(4.0, 6.0);
    Point a(1.0, 1.0);
    Point c(4.0, 1.0);
    Point p(3.8, 1.0);
    if(bsp(a, b, c, p))
    {
        std::cout<<"inside"<<std::endl;
    }
    else
        std::cout<<"outside"<<std::endl;
}