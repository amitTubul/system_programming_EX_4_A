#include "Cowboy.hpp"
using namespace std;

namespace ariel{
    Cowboy::Cowboy(std::string name, ariel::Point location): Character(name,location,110) {
        _bulletAmount=6;

    }

    void Cowboy::shoot(ariel::Character *other) {}

    bool Cowboy::hasboolets() {return false;}

    void Cowboy::reload() {}

    std::string Cowboy::print() {return " ";}

    int Cowboy::getNumOfBullets() {return _bulletAmount;}
}