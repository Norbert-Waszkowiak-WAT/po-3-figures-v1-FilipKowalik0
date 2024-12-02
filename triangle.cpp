#include "point.h"
#include "triangle.h"

Triangle::Triangle(Point a, Point b, Point c)
:a(a), b(b), c(c){};
Triangle::Triangle(const Triangle &other)
:a(other.a), b(other.b), c(other.c){}
bool Triangle::equals(Triangle &other){
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c);
}
void Triangle::flip(){
    a.flip();
    b.flip();
    c.flip();
}
void Triangle::move(double x, double y){
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}
doube Triangle::getSurface(){

}
std::String Triangle::toString(){
    return "Triangle(" + a.toString() + ", " + b.toString() + ", " + c.toString() + ",";
}
