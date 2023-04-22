#include <iostream>
#include "game.h"

using namespace std;

void startgame(){
    string input_1;
    srand(time(nullptr));
    cout << "Welcome to the game 'Get into the university!'" << endl;
    Delay(1000);
    cout << "In this game, you will act as a student who want to get into the university." << endl;
    Delay(1000);
    cout << "Your lifetime will start from the primary school." << endl;
    Delay(1000);
    cout << "The game is turn-based, each turn you will have 3 choice (or more when you grow up) which are 1.study 2.rest/activities 3.other events(may be positive or negative)" << endl;
    Delay(1000);
    cout << "Your have three proprties 1.Your IQ 2.Your pressure 3.Parents satisfication." << endl;
    Delay(1000);
    cout << "IQ determine the difficulty of the test in each stage." << endl;
    Delay(1000);
    cout << "The pressure will affect the ouccrance probability of special events, if your pressure is full you will fail the game." << endl;
    Delay(1000);
    cout << "Parents satisfication is similar to he pressure, you will also lose if this valuse is full." << endl;
    Delay(1000);
    cout << "Remeber, every single choice you made will affect the ending." << endl;
    Delay(1000);
    cout << "Good luck! Input 'Y' to continue" << endl;
    while (true){
        cin >> input_1;
        if (valid(input_1,"Y")){
            break;
        }
    }
}