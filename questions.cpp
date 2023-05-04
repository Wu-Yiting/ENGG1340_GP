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

    ques_1[20].Qs1 = "Solve for x: 12/7=10/x. x = ?";
    ques_1[20].Qs2 = "a.35/6   b.120/7   c.6/35   d.4.83";
    ques_1[20].ans = "a";

    ques_1[21].Qs1 = "How long does it approximately takes for a ball with zero initial velocity to fall 5 meters?";
    ques_1[21].Qs2 = "a. 1 second   b. 0.5 second   c. 2 seconds   d. 0.2 second";
    ques_1[21].ans = "a";

    ques_1[22].Qs1 = "Which of the following has the largest density?";
    ques_1[22].Qs2 = "a.pure iron   b.steel   c.aluminium   d.sodium";
    ques_1[22].ans = "b";

    ques_1[23].Qs1 = "Express 0.2824 as a fraction?";
    ques_1[23].Qs2 = "a.353/1250   b.1412/2500   c.462/3000   d.888/7500";
    ques_1[23].ans = "a";

    ques_1[24].Qs1 = "All semiconductors in their last orbit have";
    ques_1[24].Qs2 = "a.8 electrons   b.2 electrons   c.4 electrons   d.6 electrons";
    ques_1[24].ans = "c";

    ques_1[25].Qs1 = "Holes are majority carriers in";
    ques_1[25].Qs2 = "a.P-type semiconductors   b.N-type semiconductors   c.Insulators   d.Superconductors";
    ques_1[25].ans = "a";

    ques_1[26].Qs1 = "How many protons does 13C has?";
    ques_1[26].Qs2 = "a.13   b.6   c.8   d.3";
    ques_1[26].ans = "b";

    ques_1[27].Qs1 = "A new recipe contains 33percent less sodium than the old one. The old one contained x milligrams of sodium. Which expressions could represent the amount of sodium in the new recipe?";
    ques_1[27].Qs2 = "a.0.67x   b.x-33x   c.0.33x   d.x-33";
    ques_1[27].ans = "a";

    ques_1[28].Qs1 = "n-type semiconductor is an example of";
    ques_1[28].Qs2 = "a. extrinsic semiconductor   b.intrinsic semiconductor   c.super conductor   d.insulator";
    ques_1[28].ans = "a";

    ques_1[29].Qs1 = "What is the formula of iron(III) oxide?";
    ques_1[29].Qs2 = "a.FeO   b.Fe2O3   c.Fe3O2   d.FeO3";
    ques_1[29].ans = "b";

    ques_1[30].Qs1 = "Jerry is a judge. He hears 5 cases every 19/8 hours. How many cases does he hear per hour on average?";
    ques_1[30].Qs2 = "a.19/40   b.8/95   c.40/19   d.95/8";
    ques_1[30].ans = "c";

    ques_1[31].Qs1 = "During the First World War, which country signed the Peace Treaty(1917) with Germeny?";
    ques_1[31].Qs2 = "a.England   b.USA   c.Russia   d.Austria";
    ques_1[31].ans = "c";

    ques_1[32].Qs1 = "The immediate cause for World War One is?";
    ques_1[32].Qs2 = "a.The assassination of Archduke Francis Ferdinand    b.The imprisonment of Lenin   c.The ambition of America to dominate the world   d.The sudden death of Lloyd George";
    ques_1[32].ans = "a";

    ques_1[33].Qs1 = "Two great Buddhist universities of Nalanda and Vikramshila";
    ques_1[33].Qs2 = "";
    ques_1[33].ans = "";

    ques_1[34].Qs1 = "";
    ques_1[34].Qs2 = "";
    ques_1[34].ans = "";

    ques_1[31].Qs1 = "";
    ques_1[31].Qs2 = "";
    ques_1[31].ans = "";

    ques_1[35].Qs1 = "";
    ques_1[35].Qs2 = "";
    ques_1[35].ans = "";

    ques_1[36].Qs1 = "";
    ques_1[36].Qs2 = "";
    ques_1[36].ans = "";

    ques_1[37].Qs1 = "";
    ques_1[37].Qs2 = "";
    ques_1[37].ans = "";

    ques_1[38].Qs1 = "";
    ques_1[38].Qs2 = "";
    ques_1[38].ans = "";

    ques_1[39].Qs1 = "";
    ques_1[39].Qs2 = "";
    ques_1[39].ans = "";
    }
