#pragma once
namespace ariel{

    class Point{
    private:
        double _x,_y;

    public:
        Point(double xCordinate, double yCordinate);
        double distance(Point other);
        void print();
        Point moveTowards(Point other, double distance);
        double getX();
        double getY();
    };

}

