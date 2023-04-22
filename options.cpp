#include <iostream>
#include "game.h"
using namespace std;

void options_1(){
    output("Your age: ");
    cout << age;
    output(" Month: ");
    cout << month << endl;
    output("Options:");
    cout << endl; 
    output("1.Study 2.Rest/Activities 3.Special events");
    cout << endl;
    int input_2;
    input_2 = inputting("123");
    if (input_2 == 1){
        study();
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