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

/*void getnumber(int diffi){
    int ran,n;
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10] = {6,7,8,9,10,11,12,13,14,15};
    int c[10] = {10,11,12,13,14,15,16,17,18,19};
    int d[10] = {15,16,17,18,19,20,21,22,23,24};
    for (int i=0; i<10; i++){
        list_1[9] = 100;
    }
    if (diffi == 1){
        for (int i=0; i<10; i++){
            srand(time(nullptr));
            ran = rand() % (9-i);
            n = a[ran];
            list_1[i] = n;
            for (int j=0; j<(10-i); j++){
                if (n == a[j]){
                    for (int z=j; z<(10-i-1); z++){
                        a[z] = a[z+1];
                    }
                    break;
                }
            }
        }
    }
    if (diffi == 2){
        for (int i=0; i<10; i++){
            srand(time(nullptr));
            ran = rand() % (9-i);
            n = b[ran];
            list_1[i] = n;
            for (int j=0; j<(10-i); j++){
                if (n == b[j]){
                    for (int z=j; z<(10-i-1); z++){
                        b[z] = b[z+1];
                    }
                    break;
                }
            }
        }
    }
    if (diffi == 3){
        for (int i=0; i<10; i++){
            srand(time(nullptr));
            ran = rand() % (9-i);
            n = c[ran];
            list_1[i] = n;
            for (int j=0; j<(10-i); j++){
                if (n == c[j]){
                    for (int z=j; z<(10-i-1); z++){
                        c[z] = c[z+1];
                    }
                    break;
                }
            }
        }
    }
    if (diffi == 4){
        for (int i=0; i<10; i++){
            srand(time(nullptr));
            ran = rand() % (9-i);
            n = d[ran];
            list_1[i] = n;
            for (int j=0; j<(10-i); j++){
                if (n == d[j]){
                    for (int z=j; z<(10-i-1); z++){
                        d[z] = d[z+1];
                    }
                    break;
                }
            }
        }
    }
    
}*/
