#include <iostream>
#include "game.h"
using namespace std;

bool game_end = false,if_hobby = false,bob = true,task = false,hobby_end = false;
int ending = -1;
int game_stage = 1;
bool main_exam = false;
int school_informs = -1;
int IQ=20,pressure=0,parent_satisf=100,unlucky = 0,task_r = 0,task_n = 0;
int age=9,month=1,hobby_id=-1,money = 10,round = 0,erase = 0,time1 = 5,hobby_value = 0,mo = 20,pare = 5;
int list_4[10] = {15,16,17,18,19,20,21,22,23,24};
int list_3[10] = {10,11,12,13,14,15,16,17,18,19};
int list_2[10] = {6,7,8,9,10,11,12,13,14,15};
int list_1[10] = {0,1,2,3,4,5,6,7,8,9};

int main(){
    initialize();
    startgame();
    rungame();
    game_ending(ending);
    return 0;
}