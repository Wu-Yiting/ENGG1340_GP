#include <iostream>
#include "game.h"
using namespace std;

void special_events(){
    int ran;
    if (gmae_stage != 1){
        if (not if_hobby){
            srand(time(nullptr));
            ran = rand() % 4 + 1;
            if (ran == 1){
                output("It's time for you to develop a hobby!(hobby may become your profession in the future)");cout<<endl;
                
            }
        }
    }
}

void hobby(){
    
}