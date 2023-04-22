#include <iostream>
#include "game.h"

using namespace std;

void startgame(){
    string input_1;
    output_slow("Welcome to the game 'Get into the university!");cout << endl;
    output_slow("In this game, you will act as a student who want to get into the university.");cout << endl;
    output_slow("Your lifetime will start from the primary school.");cout << endl;
    output_slow("The game is turn-based, each turn you will have 3 choice (or more when you grow up)");cout << endl;
    output_slow("which are 1.study 2.rest/activities 3.other events(may be positive or negative)");cout << endl;
    output_slow("Your have three proprties 1.Your IQ 2.Your pressure 3.Parents satisfication.");cout << endl;
    output_slow("IQ will determine the difficulty of the test in each stage.");cout << endl;
    output_slow("The pressure will affect the ouccrance probability of special events, if your pressure is full you will fail the game.");cout << endl;
    output_slow("Parents satisfication is similar to he pressure, you will also lose if this value is full.");cout << endl;
    output_slow("Remeber, every single choice you made will affect the ending.");cout << endl;
    output_slow("Good luck! Input 'Y' to continue.");cout << endl;
    while (true){
        cin >> input_1;
        if (valid(input_1,"Y")){
            break;
        }
        cout << "Invalid input, please try angain" << endl;
    }
}