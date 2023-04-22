#include <iostream>
using namespace std;
#ifndef GAME_H
#define GAME_H

bool game_end = false;
int ending = -1;
int game_stage = 1;
bool main_exam = false;
int school_informs = -1;
int IQ,pressure,parent_satisf;

void startgame();
void options_1(int $IQ,int $pressure,int $parent_satisf);
void options_2(int $IQ,int $pressure,int $parent_satisf);
void options_3(int $IQ,int $pressure,int $parent_satisf);
void exam_1(int $IQ,int $pressure,int $parent_satisf);
void exam_2(int $IQ,int $pressure,int $parent_satisf);
void exam_3(int $IQ,int $pressure,int $parent_satisf);
void game_ending(int $ending);

#endif