#include <iostream>
#include "game.h"
using namespace std;

void special_events(){
    int ran,input;
    int i,p,pa;
    i = IQ;
    p = pressure;
    pa = parent_satisf;
    if (game_stage != 1){
        if (not if_hobby){
            srand(time(nullptr));
            ran = rand() % 4 + 1;
            if (ran == 1){
                output("It's time for you to develop a hobby!(hobby may become your profession in the future)");cout<<endl;
                output("You can only choose one hobby in this game, and the choice cannot change.");cout<<endl;
                output("1.Drawing 2.Basketball 3.Computer game");cout<<endl;
                hobby_id = inputting("123");
                return;
            }
        }
    }
    if (game_stage == 1){
        srand(time(nullptr));
        ran = rand() % 100 ;
        if (ran <= 20){
            if (bob){
                output("One day after school, your friend Bob invite you to play video game at his home.");cout<<endl;
                output("You Said:");cout<<endl;
                cout << "1.Sorry, my mom don't allow me to play the video game." << endl;
                Delay(500);
                cout << "2.Yes, let's go!" << endl;
                Delay(500);
                cout << "3.No." << endl;
                Delay(500);
                input = inputting("123");
                if (input == 1){
                    output("Bob: Okay, bye.");cout<<endl;
                }
                if (input == 2){
                    output("You played the video game with bob for the whole afternoon, you mom get angry.");cout<<endl;
                    pressure = pressure - 10;
                    if (pressure < 0){
                        pressure = 0;
                    }
                    parent_satisf = parent_satisf + 10;
                    if (parent_satisf > 100){
                        parent_satisf = 100;
                        game_end = true;
                        ending = 2;
                    }
                    cout << "Pressure -" << p - pressure << endl;
                    Delay(500);
                    cout << "Parent satisfication +" << parent_satisf - pa << endl;
                    Delay(500);
                }
                if (input == 3){
                    output("Your emotional quotient is too low!!!"); cout << endl;
                    output("You lose a friend."); cout << endl;
                    bob = false;
                    unlucky = unlucky + 3;
                    if (unlucky > 10){
                    unlucky = 10;
                    }
                    Delay(500);
                    cout << "'lucky'(hidden value) decrease" << endl;
                    Delay(500);
                }
            }else{
                output("After you lose your friend Bob, you meet another friend Tom."); cout << endl;
                output("This time he want you to come to his home and study together."); cout << endl;
                output("You said: "); cout << endl;
                
            }
        }
    }
}

void hobby(){
    
}