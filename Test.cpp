#include "sources/Team.hpp"

#include "doctest.h"

using namespace ariel;

TEST_CASE("Point class tests") {


    SUBCASE("distance function Test") {
        Point x(0,1);
        Point y(0,0);
        double dist=x.distance(y);
        CHECK(dist==1);
    }


    SUBCASE("Move Towards Test") {
        Point a(1.0, 1.0);
        Point b(4.0, 5.0);
        double max_distance = 5.0;
        Point result = a.Point::moveTowards( b, max_distance);
        CHECK(result.getX() == b.getX());
        CHECK(result.getY() == b.getY());
        CHECK_THROWS(a.Point::moveTowards(b, -1.0));
    }

    SUBCASE("getX and getY Test") {
        Point a(1.1,2.2);
        CHECK(a.getX() == 1.1);
        CHECK(a.getY() == 2.2);

    }
}
TEST_CASE("Cowboy class tests") {
    Cowboy a("amit",Point(1.0,1.1));
    Cowboy b("bob",Point(2.0,2.1));
    CHECK(a.getNumOfBullets()==6);
    CHECK(a.getHitPoints()==110);
    a.shoot(&b);
    CHECK(a.getNumOfBullets()==5);
    CHECK(b.getHitPoints()==100);//10 points less
    CHECK(a.hasboolets()== true);
    while(a.hasboolets())a.shoot(&b);
    CHECK(a.hasboolets()== false);
    CHECK(b.getHitPoints()==50);
    a.reload();
    CHECK(a.getNumOfBullets()==6);
}


TEST_CASE("Ninja class tests") {
    YoungNinja yn("ching",Point(0,0));
    TrainedNinja tn("tching",Point(0,14));
    OldNinja on("oching",Point(1,2));
    CHECK(yn.getSpeed()==14);
    CHECK(tn.getSpeed()==12);
    CHECK(on.getSpeed()==8);
    CHECK(yn.getHitPoints()==100);
    CHECK(tn.getHitPoints()==120);
    CHECK(on.getHitPoints()==150);
    CHECK_NOTHROW(yn.move(&tn));
    CHECK_NOTHROW(yn.slash(&tn));
    CHECK(tn.getHitPoints()==80);//40 points less
}

TEST_CASE("Team class") {
    YoungNinja *yn = new YoungNinja("yn", Point(0,0));
    TrainedNinja *tn = new TrainedNinja("tn", Point(0,3));
    OldNinja *on = new OldNinja("on", Point(0,2));
    Cowboy *cb = new Cowboy("cb", Point(0,4));

    Team team(yn);

    CHECK_NOTHROW(team.add(tn));
    CHECK(team.stillAlive() == 2);
    CHECK_NOTHROW(team.add(cb));
    CHECK(team.stillAlive() == 3);

    Team team2(on);
    CHECK(team2.stillAlive() == 1);

    CHECK_NOTHROW(team.attack(&team2));



}