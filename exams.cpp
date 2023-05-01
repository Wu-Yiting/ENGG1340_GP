#include <iostream>
#include "game.h"
using namespace std;

void exam_1(){
    string input_3;
    output_slow("Congradulation! You have already finish the primary school.");cout<<endl;
    Delay(300);
    output_slow("Your need take the final-exam in primary school in order get in to the middle school");cout<<endl;
    Delay(300);
    output_slow("The difficulty of the exam is determined by your IQ value.");cout<<endl;
    Delay(300);
    output_slow("The score of the exam will effect which middle school you will get in.");cout<<endl;
    Delay(300);
    output_slow("Good luck! Enter 'Y' to start the exam.");cout<<endl;
    while (true){
        cin >> input_3;
        if (valid(input_3,"Y")){
            break;
        }
        cout << "Invalid input, please try angain!" << endl;
    }
    
}