#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

extern bool game_end;
extern int ending,age,month;
extern int game_stage;
extern bool main_exam;
extern int school_informs;
extern int IQ,pressure,parent_satisf;

void startgame();
void options_1();
void options_2();
void options_3();
void exam_1();
void exam_2();
void exam_3();
void study();
void rest();
void special_events();
void game_ending(int ending);
void output(string s);
void rungame();
int change_input(string input);
bool valid(string input,string a);
int inputting(string ss);

#endif