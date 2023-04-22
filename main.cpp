#include <iostream>
#include "game.h"
using namespace std;

int main(){
    int IQ,pressure,parent_satisf;

    startgame();
    while (not game_end){
        if (game_stage == 1){
            options_1(IQ,pressure,parent_satisf);
        }
        else if (game_stage == 2){
            options_2(IQ,pressure,parent_satisf);
        }
        else if (game_stage == 3){
            options_3(IQ,pressure,parent_satisf);
        }
        if (game_end) break;

    }
    
}