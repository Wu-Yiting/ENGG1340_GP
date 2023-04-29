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
    if (pressure >= 100){
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
    srand(time(nullptr));
    int seed;
    seed = rand() % 100;
    if (seed >= 75){
        cout << "Your got a really good rest with a sweet dream!" << endl;
        Delay(500);
        
    }
}