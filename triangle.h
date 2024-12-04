#ifndef PO_LAB3_FIGURES_TRIANGLE_H
#define PO_LAB3_FIGURES_TRIANGLE_H
#include "point.h"

class Triangle{
private:
    Point a;
    Point b;
    Point c; 
public:
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle &other);
    bool equals(Triangle &other);
    void flip();
    void move(double x, double y);
    double getSurface();
    std::string toString();
};
#endif