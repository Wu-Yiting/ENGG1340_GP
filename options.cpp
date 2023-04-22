#include <iostream>
#include "game.h"
using namespace std;

void options_1(){
    cout << "==========================" << endl;
    cout << endl;
    output("Your age: ");
    cout << age;
    output(" Month: ");
    cout << month << endl;
    output("Options:");
    cout << endl; 
    output("1.Study 2.Rest/Activities 3.Special events");
    cout << endl;
    output("Your IQ:");
    cout << IQ;
    output("/200 Pressure: ");
    cout << pressure;
    output("/100 Parents Satisfication: ");
    cout << parent_satisf;
    output("/100");
    cout << endl;
    int input_2;
    input_2 = inputting("123");
    if (input_2 == 1){
        study(game_stage);
    }else if (input_2 == 2){
       rest();
    }
    else if (input_2 == 3){
       special_events();
    }
}

void options_2(){
    
}

void options_3(){
    
}