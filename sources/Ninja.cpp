#include "Ninja.hpp"

namespace ariel{
    Ninja::Ninja(std::string name, ariel::Point location, int speed, int hitPoints): Character(name,location,hitPoints) {
        _speed=speed;
    }

    void Ninja::move(ariel::Character *other) {}

    void Ninja::slash(ariel::Character *other) {}

    int Ninja::getSpeed() {return _speed;}
}