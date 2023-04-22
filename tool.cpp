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
    stringstream ss(s);
    string word;
    while (ss>>word){
        for (char c : word){
        cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
        }
        cout << " ";
    }
    cout << endl;

}