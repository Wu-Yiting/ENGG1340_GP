#include <iostream>
#include "game.h"

using namespace std;

void startgame(){
    string input_1;   
    cout<<R"(   _____      _     _       _)" <<endl;                                   
    cout<<R"(  / ____|    | |   (_)     | |)" <<endl;                                  
    cout<<R"( | |  __  ___| |_   _ _ __ | |_ ___)" <<endl;                             
    cout<<R"( | | |_ |/ _ \ __| | | '_ \| __/ _ \ )"<<endl;                          
    cout<<R"( | |__| |  __/ |_  | | | | | || (_) |)"<<endl;                           
    cout<<R"(  \_____|\___|\__| |_|_| |_|\__\___/                _ _  )"<<endl;
    cout<<R"( | | | |                      (_)                  (_) | )"<<endl;       
    cout<<R"( | |_| |__   ___   _   _ _ __  ___   _____ _ __ ___ _| |_ _   _ )"<<endl;
    cout<<R"( | __| '_ \ / _ \ | | | | '_ \| \ \ / / _ \ '__/ __| | __| | | | )"<<endl;
    cout<<R"( | |_| | | |  __/ | |_| | | | | |\ V /  __/ |  \__ \ | |_| |_| | )"<<endl;
    cout<<R"(  \__|_| |_|\___|  \__,_|_| |_|_| \_/ \___|_|  |___/_|\__|\__, | )"<<endl;
    cout<<R"(                                                           __/ | )"<<endl;
    cout<<R"(                                                          |___/  )"<<endl;
    cout << "=======================================" << endl;
    output_slow("Welcome to the game 'Get into the university!'");cout << endl;
    output_slow("In this game, you will act as a student who want to get into the university.");cout << endl;
    output_slow("Your lifetime will start from the primary school.");cout << endl;
    output_slow("The game is turn-based, each turn you will have 3 choice (or more when you grow up).");cout << endl;
    output_slow("which are 1.study 2.rest/activities 3.other events(may be positive or negative).");cout << endl;
    output_slow("Your have three properties 1.Your IQ 2.Your pressure 3.Parents satisfaction.");cout << endl;
    output_slow("IQ will determine the difficulty of the test in each stage.");cout << endl;
    output_slow("The pressure will affect the ouccrance probability of special events, if your pressure is full you will fail the game.");cout << endl;
    output_slow("Parents satisfication is similar to he pressure, you will also lose if this value is full.");cout << endl;
    output_slow("Remeber, every single choice you made will affect the ending.");cout << endl;
    output_slow("There 13 endings in this game!");cout << endl;
    output_slow("Good luck! Input 'Y' to continue.");cout << endl;
    while (true){
        cin >> input_1;
        if (valid(input_1,"Y")){
            break;
        }
        cout << "Invalid input, please try angain!" << endl;
    }
}