#include "Point.hpp"

namespace ariel{
    Point::Point(double xCordinate, double yCordinate):_x(xCordinate),_y(yCordinate) {}

    double Point::distance(ariel::Point other) {return 0;}

    void Point::print() {}

    Point Point::moveTowards(ariel::Point other, double distance) {return Point(0,0);}

    double Point::getX() {return _x;}

    double Point::getY() {return _y;}

}