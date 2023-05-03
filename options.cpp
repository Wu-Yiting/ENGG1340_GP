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
    output("1.Study 2.Rest 3.Special events");
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
    cout << "==========================" << endl;
    cout << endl;
    output("Your age: ");
    cout << age;
    output(" Month: ");
    cout << month << endl;
    output("Options:");
    cout << endl; 
    output("1.Study 2.Rest 3.Special events 4.Hobby");
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
    while (true){
        input_2 = inputting("1234");
        if (input_2 == 4){
            if (not if_hobby){
                cout << "You have not develop a hobby (You have chance to develop a hobby in 'special events')" << endl;
            }else{
                break;
            }
        }else{
            break;
        }
    }
}

void options_3(){
    
}