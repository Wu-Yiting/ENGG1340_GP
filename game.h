#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ctime>
#include <string>
#include <sstream>
#include <chrono>
#include <thread>
using namespace std;


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
void Delay(int time);
void output(string s);
int change_input(string input);
bool valid(string input,string a);

#endif