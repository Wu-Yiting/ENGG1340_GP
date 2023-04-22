#include <iostream>
#include "game.h"
using namespace std;

void rungame(){
    while (not game_end){
        if (game_stage == 1){
            options_1();
        }
        else if (game_stage == 2){
            options_2();
        }
        else if (game_stage == 3){
            options_3();
        }
        if (game_end) break;
        if (main_exam){
            if (game_stage == 1){
                exam_1();
            }
            else if (game_stage == 2){
                exam_2();
            }
            else if (game_stage == 3){
                exam_3();
            }
        }
    }
}