#include <iostream>
#include <cstdlib>
using namespace std;
#ifndef GAME_H
#define GAME_H

extern bool game_end;
extern int ending;
extern int game_stage;
extern bool main_exam;
extern int school_informs;
extern int IQ,pressure,parent_satisf;

void startgame();
void options_1(int &IQ,int &pressure,int &parent_satisf);
void options_2(int &IQ,int &pressure,int &parent_satisf);
void options_3(int &IQ,int &pressure,int &parent_satisf);
void exam_1(int &IQ,int &pressure,int &parent_satisf);
void exam_2(int &IQ,int &pressure,int &parent_satisf);
void exam_3(int &IQ,int &pressure,int &parent_satisf);
void game_ending(int ending);

#endif