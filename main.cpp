#include <iostream>
#include "game.h"
using namespace std;

bool game_end = false;
int ending = -1;
int game_stage = 1;
bool main_exam = false;
int school_informs = -1;
int IQ=20,pressure=0,parent_satisf=100,unlucky = 0;
int age=9,month=1;

int main(){
    startgame();
    rungame();
    game_ending(ending);
    return 0;
}