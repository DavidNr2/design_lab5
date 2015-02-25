/*
   File:        testLab5.cpp
   Objective:	Designmönster DT063G - Abstract Factory
   Last change: feb 2014 / Orjan Sterner
*/

#include <vector>
#include <iostream>
#include <cstdlib>
#include "Game.h"

using std::cin;

int main() {

    int choice;
    bool keepOn = true;


    while(keepOn) {
        GameFactory *gf = NULL;
        cout << "Choose your game:" << endl;
        cout << "1 - Nice game" << endl;
        cout << "2 - Nasty game" << endl;
        cout << "3 - quit" << endl;

        while(!(cin >> choice) || choice <1 || choice >3) {
          cin.clear();
          cin.ignore(cin.rdbuf()->in_avail());
        }

        switch(choice) {
          case 1:  gf = Ett factory-objekt ; break;
          case 2:  gf = Ett annat factory-objekt; break;
          case 3: keepOn=false;
        }

        if(keepOn) {
          Game game(gf);
          game.play();
          delete gf;
        }
    } // while

    //system("pause");

    return 0;
}


