#include <iostream>
#include "game.h"
using namespace std;

bool valid(string input,string a){
    if (input.length()>1){
        return false;
    }
    for (int i=0;i<a.length();i++){
        if (input[0] == a[i]){
            return true;
        }
    }
    return false;
}

int change_input(string input){
    return input[input.length()-1] - '0';
}

void output(string s){
    cout << std::unitbuf;
    for (int i = 0;i<s.length();i++){
        cout << s[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(25)); 
        }
}

void output_slow(string s){
    cout << std::unitbuf;
    for (int i = 0;i<s.length();i++){
        cout << s[i];
        std::this_thread::sleep_for(std::chrono::milliseconds(70)); 
        }
}

int inputting(string ss){
    string input_n;
    while (true){
        cin >> input_n;
        if (valid(input_n,ss)){
            return change_input(input_n);
        }
        cout << "Invalid input, please try angain!" << endl;
    }
    return 0;
}

void Delay(int n){
    std::this_thread::sleep_for(std::chrono::milliseconds(n));
}