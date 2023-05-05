#include <iostream>
#include "game.h"
using namespace std;

void game_ending(int ending){
    cout << "=======================" << endl;
    Delay(300);
    if (ending == 1){//pressure is full.你由于过大的压力，得了抑郁症，暂停了学业，....， ，人生不只有大学，.....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 1"); cout << endl;
    }
    if (ending == 2){//parent satisfacation is zero.你和父母闹了矛盾，离家出走 ....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 2"); cout << endl;
    }
    if (ending == 3){//get into the university with low pressure.你轻松进了大学，在大学里你的成绩也很优异，毕业后你成为了....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 3"); cout << endl;
    }
    if (ending == 4){//get into the university with high pressure.你进了大学，在大学里，面对别人的竞争，压力不减，由于你过分要求自己，身体健康出了问题...最后你认清了....
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
    if (ending == 8){//hobby: drawing end 1. 你以你画画的特长，顺利进入名列前茅的世界美院....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 8"); cout << endl;
    }
    if (ending == 9){//hobby: drawing end 2. 你最终没有考上大学，但是凭借你画画的本领.....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 9"); cout << endl;
    }
    if (ending == 10){//hobby: basketball end 1. 你因过人的篮球技术，被大学破格录取.....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 10"); cout << endl;
    }
    if (ending == 11){//hobby: basketball end 2. 你最终没有考上大学，但是凭借你篮球的本领最终成为了偶像练习生....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 11"); cout << endl;
    }
    if (ending == 12){//hobby: singing end 1. 你以唱歌特长.....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 12"); cout << endl;
    }
    if (ending == 13){//hobby: singing game end 2. 你最终没有考上大学，但是凭借你.....
        output_slow("The game is end."); cout << endl;
        output_slow("Ending number: 13"); cout << endl;
    }
}