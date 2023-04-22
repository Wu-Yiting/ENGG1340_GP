#include <iostream>
#include "game.h"

using namespace std;

void startgame(){
    string input_1;
    output("Welcome to the game 'Get into the university!");
    output("In this game, you will act as a student who want to get into the university.");
    output("Your lifetime will start from the primary school.");
    output("The game is turn-based, each turn you will have 3 choice (or more when you grow up) which are 1.study 2.rest/activities 3.other events(may be positive or negative)");
    output("Your have three proprties 1.Your IQ 2.Your pressure 3.Parents satisfication.");
    output("IQ determine the difficulty of the test in each stage.");
    output("The pressure will affect the ouccrance probability of special events, if your pressure is full you will fail the game.");
    output("Parents satisfication is similar to he pressure, you will also lose if this valuse is full.");
    output("Remeber, every single choice you made will affect the ending.");
    output("Good luck! Input 'Y' to continue");
    while (true){
        cin >> input_1;
        if (valid(input_1,"Y")){
            break;
        }
        cout << "Invalid input, please try angain" << endl;
    }
}