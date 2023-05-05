#include <iostream>
#include "game.h"
using namespace std;

void special_events(){
    int ran,input,ran1;
    int ii,p,pa,m;
    ii = IQ;
    m = money;
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
    srand(time(nullptr));
    ran = rand() % 50;
    if (ran <= (unlucky + 10)){
        srand(time(nullptr));
        ran1 = rand() % 3 + 1;
        if (ran1 == 1){
            output("Unluckly, you lose your wallet.");
            money = money - 10;
            if (money < 10){
                money = 0;
            }
            cout << "Your money -" << m - money << endl;
            Delay(500);
            cout << "Money left:" << money << endl;
            Delay(500);
        }
        if (ran1 == 2){
            output("You fall into a large pit"); cout << endl;
            output("You will skip the next two round"); cout << endl;
            month = month + 4;
            if (month == 13){
                month = 1;
                age = age + 1;
            }
            round = round + 2;
            if (round == 10){
                main_exam = true;
                round = 0;
            }
        }
        if (ran1 == 3){
            output("You make a conflict with your classmate and you hurt him/her."); cout << endl;
            output("Both your teacher and your parent get really angry."); cout << endl;
            parent_satisf = parent_satisf - 10;
            if (parent_satisf < 0){
                parent_satisf = 0;
                game_end = true;
                ending = 2;
            }
            cout << "Parent satisfaction -" << pa - parent_satisf << endl;
            Delay(500);
        }
        return;
    }
    srand(time(nullptr));
    ran = rand() % 50;
    if ((not task) && (ran > 40 + unlucky)){
        task = true;
        task_r = 8;
        task_n = IQ;
        output("Your recieve a task from your teacher."); cout << endl;
        output("Teacher want you to make a plane model"); cout << endl;
        Delay(500);
        cout << "Task begin, round left: 8, goals: increase 30 IQ in 8 rounds" << endl;
        Delay(500);
        cout << "You will receive award after you make it." << endl;
        Delay(500);
        return;
    }


    if (game_stage == 1){
        srand(time(nullptr));
        ran = rand() % 40;
    }
    if (ran <= 20){
        if (bob){
            output("One day after school, your friend Bob invite you to play video game at his home.");cout<<endl;
            output("You Said:");cout<<endl;
            Delay(500);
            cout << "1.Sorry, my mom don't allow me to play the video game." << endl;
            cout << "2.Yes, let's go!" << endl;           
            cout << "3.No." << endl;         
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
                parent_satisf = parent_satisf - 10;
                if (parent_satisf <= 0){
                    parent_satisf = 0;
                    game_end = true;
                    ending = 2;
                }
                cout << "Pressure -" << p - pressure << endl;
                Delay(500);
                cout << "Parent satisfaction -" << pa - parent_satisf << endl;
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
            Delay(500);
            cout << "1.Let's go, I love study!" << endl;
            cout << "2.Sorry, I want to rest." << endl;
            input = inputting("12");
            if (input = 1){
                output("You study with Tom until midnight."); cout << endl;
                output("You learned a lot, but you fill really tired"); cout << endl;
                IQ = IQ + 20;
                pressure = pressure + 10;
                parent_satisf = parent_satisf + 10;
                if (IQ > 200){
                    IQ = 200;
                }
                if (pressure > 100){
                    pressure = 100;
                    game_end = true;
                    ending = 1;
                }
                if (parent_satisf > 100){
                    parent_satisf = 100;
                }
                cout << "IQ +" << IQ - ii << endl;
                Delay(500);
                cout << "Pressure +" << pressure - p << endl;
                Delay(500);
                cout << "Parent satisfaction +" << parent_satisf - pa << endl;
                Delay(500);
            }
        }
    }
    if ((ran > 20) && (ran <= 50)){
        output("You get into a small shop."); cout << endl;
        output("Here are the product list:"); cout << endl;
        Delay(500);
        cout << "Your money:" << money << endl;
        cout << "1.Erase (fix one of the mistake in your exam) 20$" << endl;
        cout << "2.Clock (increase 2s in your answering time) 50$" << endl;
        if (hobby){
            cout << "3.Skill book (Increase the skill of your hobby by 10) 20$" << endl;
        }
        cout << "4.Leave" << endl;
        while (true){
            input = inputting("1234");
            if (input == 4){
                break;
            }
            if (input == 1){
                if (money >= 20){
                    erase = erase + 1;
                    money = money - 20;
                    cout << "Money left:" << money << endl;
                }else{
                    cout << "You don't have enough money." << endl;
                }
            }
            if (input == 2){
                if (money >= 50){
                    time1 = time1 + 2;
                    money = money - 50;
                    cout << "Money left:" << money << endl;
                }else{
                    cout << "You don't have enough money." << endl;
                }
            }
            if (input == 3){
                if (money >= 20){
                    hobby_value = hobby_value + 10;
                    money = money - 20;
                    cout << "Money left:" << money << endl;
                }else{
                    cout << "You don't have enough money." << endl;
                }
            }
        }
    }
    if ((ran > 50) && (ran <= 60)){
        output("Your parents want you to clean the house."); cout << endl;
        output("You said:"); cout << endl;
        Delay(500);
        cout << "1.Yes, I will do." << endl;
        cout << "2.I don't want to, I want to rest." << endl;
        input = inputting("12");
        if (input == 1){
            cout << "Your parents praised you and give you some pocket money!" << endl;
            parent_satisf = parent_satisf + 10;
            if (parent_satisf > 100){
                parent_satisf = 100;
            }
            money = money + 10;
            Delay(500);
            cout << "Parent satisfaction +" << parent_satisf - pa << endl;
            Delay(500);
            cout << "Money +" << money - m << endl;
        }
        if (input = 2){
            cout << "Your parents seems disappointed." << endl;
            parent_satisf = parent_satisf - 5;
            if (parent_satisf < 0){
                parent_satisf = 0;
                game_end = true;
                ending = 2;
            }
            pressure = pressure - 10;
            cout << "Parent satisfaction -" << pa - parent_satisf << endl;
            Delay(500);
            cout << "Pressure -" << p - pressure << endl;
            Delay(500);
        }
    }
    if ((ran >= 60) && (ran < 80)){
        output("You find 10$ on the road."); cout << endl;
        output("You choose:"); cout << endl;
        Delay(500);
        cout << "1.Give to the police." << endl;
        cout << "2.Take it away." << endl;
        input = inputting("12");
        if (input == 1){
            output("The police praised you and give you a red flower."); cout << endl;
            output("Your 'Lucky'(hidden value) increased a lot"); cout << endl;
            unlucky = unlucky - 10;
            if (unlucky < -5){
                unlucky = -5;
            }
        }
    }
    if ((ran >= 80) && (ran <= 100)){
        output("The school organize you to go hiking."); cout << endl;
        output("During the trip, you choose:"); cout << endl;
        cout << "1. Pick some flower and give to your mom as a present." << endl;
        cout << "2. Take out the class book and study." << endl;
        input = inputting("12");
        if (input == 1){
            output("Your mom is really happy."); cout << endl;
            parent_satisf = parent_satisf + 30;
            pressure = pressure - 15;
            if (parent_satisf > 100){
                parent_satisf = 100;
            }
            if (pressure < 0){
                pressure = 0;
            }
            Delay(500);
            cout << "Parent satisfaction +" << parent_satisf - pa << endl;
            Delay(500);
            cout << "Pressure -" << p - pressure << endl;
            Delay(500);
        }
        if (input == 2){
            output("It is not a wise choise."); cout << endl;
            Delay(500);
            pressure = pressure + 15;
            if (pressure > 100){
                pressure = 100;
                game_end = true;
                ending = 1;
            }
            IQ = IQ + 3;
            if (IQ > 100){
                IQ = 100;
            }
            cout << "IQ +" << IQ - ii << endl;
            Delay(500);
            cout << "Pressure -" << pressure - p << endl;
            Delay(500);
        }
    }
}

void hobby(){
    
}