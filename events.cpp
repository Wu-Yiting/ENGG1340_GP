#include <iostream>
#include "game.h"
using namespace std;

void study(int stage){
    int a,b,c;
    a = IQ;b = pressure;c = parent_satisf;
    IQ = IQ + 2*stage;
    parent_satisf = parent_satisf + 10;
    pressure = pressure + 4*stage;
    if (IQ > 200){
        IQ = 200;
    }
    if (pressure > 100){
        game_end = true;
        ending = 1;
        pressure = 100;
        return;
    }
    if (parent_satisf > 100){
        parent_satisf = 100;
    }
    cout << "Your IQ+" << IQ - a << endl;
    Delay(500);
    cout << "Your Pressure+"<< pressure - b << endl;
    Delay(500);
    cout << "The Parent Satisfication+" << parent_satisf - c << endl;
    Delay(500);

}

void rest(){
    int IQ_1 = IQ;
    int pressure_1 = pressure;
    srand(time(nullptr));
    int seed,seed1;
    seed = rand() % 100;
    if (seed >= (75+unlucky)){
        cout << "Your got a really good rest with a sweet dream!" << endl;
        Delay(500);
        pressure = pressure - 15;
        if (pressure < 0){
            pressure = 0;
        }
        seed1 = (rand() % 4) + 1;
        IQ = IQ + seed1;
        if (IQ > 100){
            IQ = 100;
        }
    }
    else if ((seed < (75+unlucky)) && (seed > (10+unlucky))){
        cout << "Your have a rest after busy work and sleep well." << endl;
        Delay(500);
        pressure = pressure - 10;
        if (pressure < 0){
            pressure = 0;
        }
    }
    else if (seed <= (10+unlucky)){
        cout << "You seems didn't sleep well" << endl;
        Delay(500);
        cout << "Your 'lucky' decrease (lucky is a hidden value)." << endl;
        Delay(500);
        unlucky = unlucky + 2;
        if (unlucky > 10){
            unlucky = 10;
        }
        pressure = pressure - 5;
        if (pressure < 0){
            pressure = 0;
        }
    }
    cout << "Your IQ+" << IQ - IQ_1 << endl;
    Delay(500);
    cout << "Your Pressure-"<< pressure_1 - pressure << endl;
    Delay(500);

}