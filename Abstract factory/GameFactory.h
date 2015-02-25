/*
   File:        GameFactory.h
   Objective:	Designmönster DT063G - Abstract Factory
   Last change: feb 2014 / Orjan Sterner
*/


#ifndef GameFactoryH
#define GameFactoryH

#include <vector>
#include <string>

using std::vector;
using std::string;

class Player;
class Obstacle;
class Action;


// GameFactory är en abstrakt klass som definierar ett interface för
// deriverade konkreta klasser

class GameFactory {
protected:
  GameFactory() { }

public:
   // Lämpliga operationer: se klassen Game.

};


/* NiceGameFactory:

    Lämpliga operationer.
    (Implementationer i GameFactory.cpp)

    I ett 'Nice Game' ingår följande hinder:
    Wizard, Wall, Elephant, DPexam

    Möjliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, BargainAndBuyAction,
    ChainsawAction, ClimbAction, CastAspellAction, SurrenderAction

    Player:
    OrdinaryPlayer
*/


/* NastyGameFactory:

    Lämpliga operationer
    (Implementationer i GameFactory.cpp)

    I ett 'Nasty Game' ingår följande hinder:
    Dragon, Bomb, Samuray, SumoWrestler, Gangster

    Möjliga Actions:
    BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
    OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction

    Player:
    HeroPlayer
*/


#endif
