#include "Character.hpp"
using namespace std;

namespace ariel{
    Character::Character(string name, ariel::Point point, int hitPoints):_name(name),
                                                                         _location(point), _hitPoints(hitPoints){}
    bool Character::isAlive() {return false;}

    double Character::distance(ariel::Character *other) {return 0;}

    void Character::hit(int hitPoints) {}

    std::string Character::getName() {return " ";}

    Point Character::getLocation() {return Point(0,0);}

    void Character::print() {}

    int Character::getHitPoints() {return _hitPoints;}




}
