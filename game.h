#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;

class question{
    public:
        string Qs1;
        string Qs2;
        string ans;
};

extern bool game_end,if_hobby,bob,task,hobby_end;
extern int ending,age,month;
extern int game_stage;
extern bool main_exam;
extern int school_informs,money,erase,task_r,task_n;
extern int IQ,pressure,parent_satisf,unlucky,hobby_id,round,time1,hobby_value,mo,pare;
extern question ques_1[],ques_2[],ques_3[];

void startgame();
void initialize();
void options_1();
void options_2();
void options_3();
void exam_1();
void exam_2();
void exam_3();
void study(int stage);
void rest();
void special_events();
void hobby();
void game_ending(int ending);
void output(string s);
void output_slow(string s);
void rungame();
void Delay(int n);
int change_input(string input);
bool valid(string input,string a);
int inputting(string ss);

#endif