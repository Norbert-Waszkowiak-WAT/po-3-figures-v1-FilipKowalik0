#ifndef PO_LAB3_FIGURES_LINE_H
#define PO_LAB3_FIGURES_LINE_H

#include "point.h"


class Line {
private:
    Point a;
    Point b;
public:
    Line(Point a, Point b);

    Line(const Line &other);

    bool equals(Line &other);

    void flip();

    void move(double x, double y);

    std::string toString();

};


#endif
/*#ifndef "point.h"
class Line{
    private:
    std::int point_a;
    std::int point_b;
    public:
    Line(point_a,point_b);

    Line( const Line &other);

    bool equals(Line &other);

    void flip();

    void move(double x, double y);

    std::string toString();
    
}*/