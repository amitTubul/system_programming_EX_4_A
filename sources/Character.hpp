#pragma once
#include <string>
#include "Point.hpp"

//maybe pure virtual
namespace ariel{
    class Character{
    private:
        Point _location;
        int _hitPoints;
        std::string _name;

    public:
        Character(std::string name, Point point,int hitPoints);
        virtual ~Character()=default;
        bool isAlive();
        double distance(Character* other);
        void hit(int hitPoints);
        std::string getName();
        Point getLocation();
        void print();
        int getHitPoints();
    };
}
