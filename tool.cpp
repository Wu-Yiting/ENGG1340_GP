#include <iostream>
#include "game.h"
using namespace std;

void Delay(int time){
    clock_t now = clock(); 
    while((clock()-now)<time); 
}

bool valid(string input,string a){
    if (input.length()>1){
        return false;
    }
    for (int i=0;i<a.length();i++){
        if (input[0] == a[i]){
            return true;
        }
    }
    return false;
}

int change_input(string input){
    return input[input.length()-1] - '0';
}