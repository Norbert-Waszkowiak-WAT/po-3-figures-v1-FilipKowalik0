#include "line.h"
#include "point.h"

Line::Line(Point a, Point b) : a(a), b(b) {}

Line::Line(const Line &other) : a(other.a), b(other.b) {}

void Line::flip() {
    a.flip();
    b.flip();
}

void Line::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
}

std::string Line::toString() {
    return "Line(" + a.toString() + ", " + b.toString() + ")";
}

bool Line::equals(Line &other) {
    return a.equals(other.a) && b.equals(other.b);
}

/*
#include <iostream>
#include <string>
#include "line.h"
#include "point.h"
class Line{
    private:
    std::int point_a;
    std::int point_b;
    public:
    Line(std::int point_a, std::int point_b)
    :point_a(point_a),point_b(point_b){};
    
    Line(Point &other)
    :point_a(other.point_a),point_b(other.point_b){};

    bool equals(Line &other){
        return point_a.equals(other.a) && b.equals(other.b);
    }

    void flip(){
        punkt_a.flip();
        punkt_b.flip();
    }

    void move (double x, double y){
        point_a.move(x, y);
        point_b.move(x, y);
    }
    std::String toString(){
        return "Line(" + a.toString() + ", " + b.toString() + ")";
    }
}*/