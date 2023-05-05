#include <iostream>
#include "game.h"
using namespace std;

void game_ending(int ending){
    cout << "=======================" << endl;
    Delay(300);
    if (ending == 1){//pressure is full.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 1"); cout << endl;
    }
    if (ending == 2){//parent satisfacation is zero.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 2"); cout << endl;
    }
    if (ending == 3){//get into the university with low pressure.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 3"); cout << endl;
    }
    if (ending == 4){//get into the university with high pressure.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 4"); cout << endl;
    }
    if (ending == 5){//the primary school final exam is failed.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 5"); cout << endl;
    }
    if (ending == 6){//the middle school final exam is failed.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 6"); cout << endl;
    }
    if (ending == 7){//the high school final exam is failed.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 7"); cout << endl;
    }
    if (ending == 8){//hobby: drawing end 1.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 8"); cout << endl;
    }
    if (ending == 9){//hobby: drawing end 2.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 9"); cout << endl;
    }
    if (ending == 10){//hobby: basketball end 1.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 10"); cout << endl;
    }
    if (ending == 11){//hobby: basketball end 2.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 11"); cout << endl;
    }
    if (ending == 12){//hobby: singing end 1.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 12"); cout << endl;
    }
    if (ending == 13){//hobby: singing game end 2.
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 13"); cout << endl;
    }
}