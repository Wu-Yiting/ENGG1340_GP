#include <iostream>
#include "game.h"
using namespace std;

void rungame(){
    int round = 0;
    while (not game_end){
        if (game_stage == 1){
            options_1();
            month = month + 1;
            if (month == 13){
                month = 1;
                age = age + 1;
            }
            round = round + 1;
            if (round == 10){
                main_exam = true;
                round = 0;
            }
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