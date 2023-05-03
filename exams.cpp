#include <iostream>
#include "game.h"
using namespace std;
using namespace chrono;

void exam_1(){
    string input_3;
    int number,score;
    int diffi=4;
    score = 0;
    cout << "===========================" << endl;
    Delay(300);
    output_slow("Congradulation! You have already finish the primary school.");cout<<endl;
    Delay(300);
    output_slow("Your need take the final-exam in primary school in order to get in the middle school.");cout<<endl;
    Delay(300);
    output_slow("The difficulty of the exam is determined by your IQ value.");cout<<endl;
    Delay(300);
    output_slow("The score of the exam will affect which middle school you will get in.");cout<<endl;
    Delay(300);
    output_slow("Good luck! Enter 'Y' to start the exam.");cout<<endl;
    while (true){
        cin >> input_3;
        if (valid(input_3,"Y")){
            break;
        }
        cout << "Invalid input, please try angain!" << endl;
    }
    if ((IQ>=0) && (IQ<15)){
        diffi = 4;
    }else if ((IQ>=15) && (IQ<30)){
        diffi = 3;
    }else if ((IQ>=30) && (IQ<45)){
        diffi = 2;
    }else if ((IQ>=45)){
        diffi = 1;
    }
    for (int i=0; i<=10; i++){
        srand(time(nullptr));
        number = rand() % (diffi*10 - 1) + diffi*10 - 10;
        cout << endl <<  "==========================" << endl;
        output(ques_1[i].Qs1);cout<<endl;
        output(ques_1[i].Qs2);cout<<endl;
        auto start = high_resolution_clock::now();
        while (true){
            if (cin >> input_3){
                auto stop = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(stop - start).count();
                if (duration <= 5000){
                    if (input_3 == ques_1[i].ans){
                        cout << "Correct! score + 3" << endl;
                        score = score + 3;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }else{
                        cout << "You are wrong. score - 1" << endl;
                        score = score - 1;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }
                }else{
                    cout << "Too late. score + 1" << endl;
                    Delay(500);
                    cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                    Delay(500);
                }
                break;
            }
        }
    }
    output("The exam is finished. Your score:");
    cout << score << endl;
    main_exam = false;
}

void exam_2(){
    string input_3;
    int number,score;
    int diffi=4;
    score = 0;
    cout << "===========================" << endl;
    Delay(300);
    output_slow("Congradulation! You have already finish the middle school.");cout<<endl;
    Delay(300);
    output_slow("Your need take the final-exam in middle school in order to get in the high school.");cout<<endl;
    Delay(300);
    output_slow("The difficulty of the exam is determined by your IQ value.");cout<<endl;
    Delay(300);
    output_slow("The score of the exam will affect which school you will get in.");cout<<endl;
    Delay(300);
    output_slow("Good luck! Enter 'Y' to start the exam.");cout<<endl;
    while (true){
        cin >> input_3;
        if (valid(input_3,"Y")){
            break;
        }
        cout << "Invalid input, please try angain!" << endl;
    }
    if (IQ<75){
        diffi = 4;
    }else if ((IQ>=75) && (IQ<90)){
        diffi = 3;
    }else if ((IQ>=90) && (IQ<105)){
        diffi = 2;
    }else if ((IQ>=105)){
        diffi = 1;
    }
    for (int i=0; i<=10; i++){
        srand(time(nullptr));
        number = rand() % (diffi*10 - 1) + diffi*10 - 10;
        cout << endl <<  "==========================" << endl;
        output(ques_2[i].Qs1);cout<<endl;
        output(ques_2[i].Qs2);cout<<endl;
        auto start = high_resolution_clock::now();
        while (true){
            if (cin >> input_3){
                auto stop = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(stop - start).count();
                if (duration <= 5000){
                    if (input_3 == ques_2[i].ans){
                        cout << "Correct! score + 3" << endl;
                        score = score + 3;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }else{
                        cout << "You are wrong. score - 1" << endl;
                        score = score - 1;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }
                }else{
                    cout << "Too late. score + 1" << endl;
                    Delay(500);
                    cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                    Delay(500);
                }
                break;
            }
        }
    }
    output("The exam is finished. Your score:");
    cout << score << endl;
    main_exam = false;
}

void exam_3(){
    string input_3;
    int number,score;
    int diffi=4;
    score = 0;
    cout << "===========================" << endl;
    Delay(300);
    output_slow("Congradulation! You have already finish the high school.");cout<<endl;
    Delay(300);
    output_slow("Your need take the final-exam in primary school in order to get in the university!");cout<<endl;
    Delay(300);
    output_slow("The difficulty of the exam is determined by your IQ value.");cout<<endl;
    Delay(300);
    output_slow("The score of the exam will affect which university you will get in.");cout<<endl;
    Delay(300);
    output_slow("Good luck! Enter 'Y' to start the exam.");cout<<endl;
    while (true){
        cin >> input_3;
        if (valid(input_3,"Y")){
            break;
        }
        cout << "Invalid input, please try angain!" << endl;
    }
    if (IQ<135){
        diffi = 4;
    }else if ((IQ>=135) && (IQ<150)){
        diffi = 3;
    }else if ((IQ>=150) && (IQ<165)){
        diffi = 2;
    }else if ((IQ>=165)){
        diffi = 1;
    }
    for (int i=0; i<=10; i++){
        srand(time(nullptr));
        number = rand() % (diffi*10 - 1) + diffi*10 - 10;
        cout << endl <<  "==========================" << endl;
        output(ques_3[i].Qs1);cout<<endl;
        output(ques_3[i].Qs2);cout<<endl;
        auto start = high_resolution_clock::now();
        while (true){
            if (cin >> input_3){
                auto stop = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(stop - start).count();
                if (duration <= 5000){
                    if (input_3 == ques_3[i].ans){
                        cout << "Correct! score + 3" << endl;
                        score = score + 3;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }else{
                        cout << "You are wrong. score - 1" << endl;
                        score = score - 1;
                        Delay(500);
                        cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                        Delay(500);
                    }
                }else{
                    cout << "Too late. score + 1" << endl;
                    Delay(500);
                    cout << "Time you take:" << fixed << setprecision(2) << static_cast<double>(duration) / 1000 << endl;
                    Delay(500);
                }
                break;
            }
        }
    }
    output("The exam is finished. Your score:");
    cout << score << endl;
    main_exam = false;
}