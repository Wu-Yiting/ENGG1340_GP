#include <iostream>
#include "game.h"
using namespace std;

bool game_end = false;
int ending = -1;
int game_stage = 1;
bool main_exam = false;
int school_informs = -1;
int IQ,pressure,parent_satisf;

int main(){
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
        if (main_exam){
            if (game_stage == 1){
                exam_1(IQ,pressure,parent_satisf);
            }
            else if (game_stage == 2){
                exam_2(IQ,pressure,parent_satisf);
            }
            else if (game_stage == 3){
                exam_3(IQ,pressure,parent_satisf);
            }
        }  
    }
    game_ending(ending);
}