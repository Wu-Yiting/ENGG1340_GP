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

    ques_1[10].Qs1 = "123+321 = ?";
    ques_1[10].Qs2 = "a.233   b.444   c.666   d.0";
    ques_1[10].ans = "b";

    ques_1[11].Qs1 = "Which one is not one of the five oceans?";
    ques_1[11].Qs2 = "a.Pacific Ocean   b.Atlantic Ocean   c.Arctic Ocean   d.Baltic Sea";
    ques_1[11].ans = "d";

    ques_1[12].Qs1 = "Which one is not one of the Four Ancient Civilizations?";
    ques_1[12].Qs2 = "a.Egypt   b.the Indus valley   c.Ancient China   d.Ancient Greece";
    ques_1[13].ans = "d";

    ques_1[14].Qs1 = "12*24 = ?";
    ques_1[14].Qs2 = "a.144   b.188   c.244   d.288";
    ques_1[14].ans = "d";

    ques_1[15].Qs1 = "Who is the first president of the US?";
    ques_1[15].Qs2 = "a.George Washington   b.Abraham Lincoln   c.Theodore Roosevelt   d.Thomas Jefferson";
    ques_1[15].ans = "a";

    ques_1[16].Qs1 = "Who is the presiednt of HKU for now?";
    ques_1[16].Qs2 = "a.Dirk Schneiders   b.Xiang Zhang   c.Chim Tat Wing   d.Lee Ka-chiu";
    ques_1[16].ans = "b";

    ques_1[17].Qs1 = "What is the Standard atmosphere pressure?";
    ques_1[17].Qs2 = "a.101325Pa   b.10000Pa   c.1000000Pa   d.98000Pa";
    ques_1[17].ans = "a";

    ques_1[18].Qs1 = "What is the second element of the periodic table of elemets?";
    ques_1[18].Qs2 = "a.Oxygen   b.Nitrogeon   c.Helium   d.Hydrogen";
    ques_1[18].ans = "c";

    ques_1[19].Qs1 = "1+2*2+2/2 = ?";
    ques_1[19].Qs2 = "a.6   b.3   c.7   d.8";
    ques_1[19].ans = "a";

    }