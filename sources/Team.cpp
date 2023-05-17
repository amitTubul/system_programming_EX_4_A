#include "Team.hpp"
#include <iostream>

namespace ariel{
    Team::Team(Character *leader):_leader(leader),_matesAmount(1) {
        add(leader);
    }

    Team::~Team() {
        for (Character* member:_teamMates)delete(member);
    }

    void Team::add(Character *teamMate) {
        if(_matesAmount<MAX_CAPACITY)_teamMates.push_back(teamMate);
        else throw std::runtime_error("max capacity");
    }

    void Team::attack(ariel::Team *otherTeam) {}

    int Team::stillAlive() const {return 0;}

    void Team::print() const {}
}