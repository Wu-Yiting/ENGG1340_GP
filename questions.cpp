#include <iostream>
#include "game.h"
using namespace std;

question ques_1[100];
question ques_2[100];
question ques_3[100];

void initialize(){
    ques_1[0].Qs1 = "1+1 = ?";
    ques_1[0].Qs2 = "a.2   b.3   c.200  d.1340";
    ques_1[0].ans = "a";

    ques_1[1].Qs1 = "2+3 = ?";
    ques_1[1].Qs2 = "a.1   b.3   c.-1  d.5";
    ques_1[1].ans = "d";

    ques_1[2].Qs1 = "3-1 = ?";
    ques_1[2].Qs2 = "a.2   b.0   c.31  d.29";
    ques_1[2].ans = "a";

    ques_1[3].Qs1 = "4+4 = ?";
    ques_1[3].Qs2 = "a.88   b.8   c.111  d.1340";
    ques_1[3].ans = "b";

    ques_1[4].Qs1 = "1+12 = ?";
    ques_1[4].Qs2 = "a.112   b.12   c.13  d.11";
    ques_1[4].ans = "c";

    ques_1[5].Qs1 = "99+1 = ?";
    ques_1[5].Qs2 = "a.99   b.98   c.100  d.101";
    ques_1[5].ans = "c";

    ques_1[6].Qs1 = "3*4 = ?";
    ques_1[6].Qs2 = "a.12   b.13   c.8  d.24";
    ques_1[6].ans = "a";

    ques_1[7].Qs1 = "7-5 = ?";
    ques_1[7].Qs2 = "a.10   b.12   c.4  d.2";
    ques_1[7].ans = "d";

    ques_1[8].Qs1 = "6+6 = ?";
    ques_1[8].Qs2 = "a.36   b.12   c.66  d.18";
    ques_1[8].ans = "b";

    ques_1[9].Qs1 = "0*12 = ?";
    ques_1[9].Qs2 = "a.120   b.12   c.-1  d.0";
    ques_1[9].ans = "d";
}