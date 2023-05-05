#include <iostream>
#include "game.h"
using namespace std;

void rungame(){
    while (not game_end){
        if (game_stage == 1){
            options_1();
            month = month + 2;
            if (month == 13){
                month = 1;
                age = age + 1;
            }
            round = round + 1;
            if (round == 10){
                main_exam = true;
                round = 0;
            }
            if (task){
                if ((IQ - task_n) >= 30){
                    output("You complete the task!"); cout << endl;
                    parent_satisf = 100;
                    time1 = time1 + 3;
                    cout << "Your parent satisfaction change to 100!" << endl;
                    Delay(500);
                    cout << "Youe exam answering time interval increase +3s" << endl;
                    Delay(500);
                    task = false;
                }
                if (((IQ - task_n) < 30) && (task_r == 0)){
                    output("You fail the task, no reward will receive."); cout << endl;
                    task = false;
                }
                task_r = task_r - 1;
            }
        }
        else if (game_stage == 2){
            options_2();
            month = month + 2;
            if (month == 13){
                month = 1;
                age = age + 1;
            }
            round = round + 1;
            if (round == 10){
                main_exam = true;
                round = 0;
            }
            if (task){
                if ((IQ - task_n) >= 30){
                    output("You complete the task!"); cout << endl;
                    parent_satisf = 100;
                    time1 = time1 + 3;
                    cout << "Your parent satisfaction change to 100!" << endl;
                    Delay(500);
                    cout << "Youe exam answering time interval increase +3s" << endl;
                    Delay(500);
                    task = false;
                }
                if (((IQ - task_n) < 30) && (task_r == 0)){
                    output("You fail the task, no reward will receive."); cout << endl;
                    task = false;
                }
                task_r = task_r - 1;
            }
        }
        else if (game_stage == 3){
            options_3();
            month = month + 2;
            if (month == 13){
                month = 1;
                age = age + 1;
            }
            round = round + 1;
            if (round == 10){
                main_exam = true;
                round = 0;
            }
            if (task){
                if ((IQ - task_n) >= 30){
                    output("You complete the task!"); cout << endl;
                    parent_satisf = 100;
                    time1 = time1 + 3;
                    cout << "Your parent satisfaction change to 100!" << endl;
                    Delay(500);
                    cout << "Youe exam answering time interval increase +3s" << endl;
                    Delay(500);
                    task = false;
                }
                if (((IQ - task_n) < 30) && (task_r == 0)){
                    output("You fail the task, no reward will receive."); cout << endl;
                    task = false;
                }
                task_r = task_r - 1;
            }
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