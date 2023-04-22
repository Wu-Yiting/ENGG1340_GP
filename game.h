#ifndef GAME_H
#define GAME_H

bool game_end = false;
int ending = -1;
int game_stage = 1;

void startgame();
void options_1(int $IQ,int $pressure,int $parent_satisf);
void options_2(int $IQ,int $pressure,int $parent_satisf);
void options_3(int $IQ,int $pressure,int $parent_satisf);

#endif