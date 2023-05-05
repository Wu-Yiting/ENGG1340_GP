#include <iostream>
#include "game.h"
using namespace std;

question ques_1[100];
question ques_2[100];
question ques_3[100];

void initialize(){
    //ques_1 are for primary school.
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

    ques_1[11].Qs1 = "Do you like ENGG1340?";
    ques_1[11].Qs2 = "a.Yes   b.No   c.No   d.No";
    ques_1[11].ans = "a";

    ques_1[12].Qs1 = "Jim drove 768 miles of a 1200 miles journey. How many more miles are left?";
    ques_1[12].Qs2 = "a.432   b.442   c. 532   d.542";
    ques_1[12].ans = "a";

    ques_1[13].Qs1 = "What is the boiling point of pure water at 1 standard atomasphere pressure?";
    ques_1[13].Qs2 = "a.0 degree Celsius   b. 100 degree Fahrenheit   c.100 Celsius degree   d.0 degree Fahrenheit";
    ques_1[13].ans = "c";

    ques_1[14].Qs1 = "What is most symbolic in the Trojan War?";
    ques_1[14].Qs2 = "a.Mirrors   b.Stone throwers   c.Wooden horse   d.Indians";
    ques_1[14].ans = "c";

    ques_1[15].Qs1 = "3*37 = ?";
    ques_1[15].Qs2 = "a.101   b.121   c. 91   d.111";
    ques_1[15].ans = "d";

    ques_1[16].Qs1 = "How many digits are in the number 1002004?";
    ques_1[16].Qs2 = "a.3   b.5   c.6   d.7";
    ques_1[16].ans = "d";

    ques_1[17].Qs1 = "What is 109,786,865 rounded to the nearest ten million?";
    ques_1[17].Qs2 = "a.110,000,000   b.100,000,000   c.111,000,000   d.109,770,000";
    ques_1[17].ans = "a";

    ques_1[18].Qs1 = "456 / 6 = ?";
    ques_1[18].Qs2 = "a.7   b.76   c.75   d.70";
    ques_1[18].ans = "b";

    ques_1[19].Qs1 = "2 / 0 = ?";
    ques_1[19].Qs2 = "a.2   b.0   c.infinity   d.cannot find answer";
    ques_1[19].ans = "d";

    ques_1[20].Qs1 = "What is the value of (21 + 5) / (4 - 2)?";
    ques_1[20].Qs2 = "a.13   b.26   c.2   d.28";
    ques_1[20].ans = "a";

    ques_1[21].Qs1 = "Which of the following numbers is prime?";
    ques_1[21].Qs2 = "a.12   b.6   c.9   d.7";
    ques_1[21].ans = "d";

    ques_1[22].Qs1 = "Find the Greatest Common Factor of 6 and 4";
    ques_1[22].Qs2 = "a.1   b.2   c.4   d.6";
    ques_1[22].ans = "b";

    ques_1[23].Qs1 = "5 x 10^3 + 4 x 10^2 + 5 x 10^1 + 2 x 10^0 = ?";
    ques_1[23].Qs2 = "a.5450   b.50+40+50+2   c.5452   d.5400";
    ques_1[23].ans = "c";
    
    //ques_2 are for junior high school.
    ques_2[0].Qs1 = "123+321 = ?";
    ques_2[0].Qs2 = "a.666   b.233   c.444   d.123321";
    ques_2[0].ans = "c";

    ques_2[1].Qs1 = "Evaluate : (-20) * (-2-4)";
    ques_2[1].Qs2 = "a.-120   b.60   c.120   d.-60";
    ques_2[1].ans = "c";

    ques_2[2].Qs1 = "Round number 4.499 to the nearest integer.";
    ques_2[2].Qs2 = "a.5   b.5.000   c.0   d.4";
    ques_2[2].ans = "d";

    ques_2[3].Qs1 = "Among a)1234  b)25  c)14505  d)63, how many are divisible by 5?";
    ques_2[3].Qs2 = "a.1   b.2   c.3   d.4";
    ques_2[3].ans = "b";

    ques_2[4].Qs1 = "Which of the following numbers is divisible by 2?";
    ques_2[4].Qs2 = "a.3798   b.7983   c.9873   d.8739";
    ques_2[4].ans = "a";

    ques_2[5].Qs1 = "find x, so that 10/15=x/3, x = ?";
    ques_2[5].Qs2 = "a.150   b.5   c.2   d.1";
    ques_2[5].ans = "c";

    ques_2[6].Qs1 = "Which one is true?";
    ques_2[6].Qs2 = "a.1/3 < 2/4   b.1/3 < 3/10   c.1/99 < 1/100   d.1=2";
    ques_2[6].ans = "a";

    ques_2[7].Qs1 = "Evaluate: (3^2)*(2^2)";
    ques_2[7].Qs2 = "a.24   b.36   c.6   d.12";
    ques_2[7].ans = "b";

    ques_2[8].Qs1 = "Solve the equation: (x-8)/3=9, x = ?";
    ques_2[8].Qs2 = "a.19   b.35   c.11   d.-5";
    ques_2[8].ans = "b";

    ques_2[9].Qs1 = "Which of the following values of x satifies the equation 2 x - 4 = 4 ?";
    ques_2[9].Qs2 = "a.x=0   b.x=4   c.x=2   d.x=-2";
    ques_2[9].ans = "b";

    ques_2[10].Qs1 = "Which of the following pairs of equations have the same solution?";
    ques_2[10].Qs2 = "a.x=2 and 2x=4   b.x+3=6 and x+4=8   c.x/2=2 and x=-4   d.3x=8 and x+1=4";
    ques_2[10].ans = "a";
    
    ques_2[11].Qs1 = "Which one is not one of the five oceans?";
    ques_2[11].Qs2 = "a.Pacific Ocean   b.Atlantic Ocean   c.Arctic Ocean   d.Baltic Sea";
    ques_2[11].ans = "d";

    ques_2[12].Qs1 = "Which one is not one of the Four Ancient Civilizations?";
    ques_2[12].Qs2 = "a.Egypt   b.the Indus valley   c.Ancient China   d.Ancient Greece";
    ques_2[13].ans = "d";

    ques_2[14].Qs1 = "12*24 = ?";
    ques_2[14].Qs2 = "a.144   b.188   c.244   d.288";
    ques_2[14].ans = "d";

    ques_2[15].Qs1 = "Who is the first president of the US?";
    ques_2[15].Qs2 = "a.George Washington   b.Abraham Lincoln   c.Theodore Roosevelt   d.Thomas Jefferson";
    ques_2[15].ans = "a";

    ques_2[16].Qs1 = "Who is the presiednt of HKU for now?";
    ques_2[16].Qs2 = "a.Dirk Schneiders   b.Xiang Zhang   c.Chim Tat Wing   d.Lee Ka-chiu";
    ques_2[16].ans = "b";

    ques_2[17].Qs1 = "What is the Standard atmosphere pressure?";
    ques_2[17].Qs2 = "a.101325Pa   b.10000Pa   c.1000000Pa   d.98000Pa";
    ques_2[17].ans = "a";

    ques_2[18].Qs1 = "What is the second element of the periodic table of elemets?";
    ques_2[18].Qs2 = "a.Oxygen   b.Nitrogeon   c.Helium   d.Hydrogen";
    ques_2[18].ans = "c";

    ques_2[19].Qs1 = "1+2*2+2/2 = ?";
    ques_2[19].Qs2 = "a.6   b.3   c.7   d.8";
    ques_2[19].ans = "a";

    ques_2[20].Qs1 = "Solve for x: 12/7=10/x. x = ?";
    ques_2[20].Qs2 = "a.35/6   b.120/7   c.6/35   d.4.83";
    ques_2[20].ans = "a";

    ques_2[21].Qs1 = "How long does it approximately takes for a ball with zero initial velocity to fall 5 meters?";
    ques_2[21].Qs2 = "a. 1 second   b. 0.5 second   c. 2 seconds   d. 0.2 second";
    ques_2[21].ans = "a";

    ques_2[22].Qs1 = "Which of the following has the largest density?";
    ques_2[22].Qs2 = "a.pure iron   b.steel   c.aluminium   d.sodium";
    ques_2[22].ans = "b";

    ques_2[23].Qs1 = "Express 0.2824 as a fraction?";
    ques_2[23].Qs2 = "a.353/1250   b.1412/2500   c.462/3000   d.888/7500";
    ques_2[23].ans = "a";

    //ques_3 are for senior high school.
    ques_3[0].Qs1 = "2^3 = ?";
    ques_3[0].Qs2 = "a.6   b.9   c.8   d.23";
    ques_3[0].ans = "c";
    
    ques_3[1].Qs1 = "Factor x^2 - 2x - 24";
    ques_3[1].Qs2 = "a.(x-6)(x+4)   b.(x-4)(x-6)   c.(x+6)(x-4)   d.x(x-9)";
    ques_3[1].ans = "a";

    ques_3[2].Qs1 = "What is the interior angle of a right hexagon?";
    ques_3[2].Qs2 = "a.60 degree   b.120 degree   c.720 degree   d.240 degree";
    ques_3[2].ans = "b";

    ques_3[3].Qs1 = "Do you like ENGG1340?";
    ques_3[3].Qs2 = "a.No   b.Yes   c.Nope   d.Noooo";
    ques_3[3].ans = "b";

    ques_3[4].Qs1 = "Evaluate (3 + 2i) - (8 - 5i)";
    ques_3[4].Qs2 = "a.-5+7i   b.-5-3i   c.5+7i   d.-5+3i";
    ques_3[4].ans = "a";

    ques_3[5].Qs1 = "Find the greatest common factor of the monomials 36x^2 and 42x^3";
    ques_3[5].Qs2 = "a.6^2   b.36x^2   c.6x^3   d.6x^2";
    ques_3[5].ans = "d";

    ques_3[6].Qs1 = "Which one is not a prerequisite of a fire?";
    ques_3[6].Qs2 = "a.Oxygen   b.Heat   c.Nitrogen   d.Fuel";
    ques_3[6].ans = "c";

    ques_3[7].Qs1 = "A periodic wave with wavelength λ = 0.5m and speed v=2m/s. What is its frequency?";
    ques_3[7].Qs2 = "a.0.25Hz   b.4Hz   c.1.414Hz   d.2Hz";
    ques_3[7].ans = "b";

    ques_3[8].Qs1 = "What is the national flower of USA?";
    ques_3[8].Qs2 = "a.Rose   b.Kit   c.Iris   d.Cornflower";
    ques_3[8].ans = "a";

    ques_3[9].Qs1 = "2^6 = ?";
    ques_3[9].Qs2 = "a.64   b.16   c.26   d.128";
    ques_3[9].ans = "a";

    ques_3[10].Qs1 = "5! = ?";
    ques_3[10].Qs2 = "a.5   b.120   c.24   d.720";
    ques_3[10].ans = "b";

    ques_3[11].Qs1 = "How many kinds of Quarks are there in total?";
    ques_3[11].Qs2 = "a.4   b.5   c.6   d.7";
    ques_3[11].ans = "c";

    ques_3[12].Qs1 = "What is Avogadro constant?";
    ques_3[12].Qs2 = "a.6.02*10^13   b.2.06*10^23   c.6.02*10^23   d. 2.06*10^13";
    ques_3[12].ans = "c";

    ques_3[13].Qs1 = "";
    ques_3[13].Qs2 = "";
    ques_3[13].ans = "";

    ques_3[14].Qs1 = "";
    ques_3[14].Qs2 = "";
    ques_3[14].ans = "";

    ques_3[15].Qs1 = "";
    ques_3[15].Qs2 = "";
    ques_3[15].ans = "";

    ques_3[16].Qs1 = "All semiconductors in their last orbit have";
    ques_3[16].Qs2 = "a.8 electrons   b.2 electrons   c.4 electrons   d.6 electrons";
    ques_3[16].ans = "c";
    
    ques_3[17].Qs1 = "Holes are majority carriers in";
    ques_3[17].Qs2 = "a.P-type semiconductors   b.N-type semiconductors   c.Insulators   d.Superconductors";
    ques_3[17].ans = "a";

    ques_3[18].Qs1 = "How many protons does 13C has?";
    ques_3[18].Qs2 = "a.13   b.6   c.8   d.3";
    ques_3[18].ans = "b";

    ques_3[19].Qs1 = "A new recipe contains 33percent less sodium than the old one. The old one contained x milligrams of sodium. Which expressions could represent the amount of sodium in the new recipe?";
    ques_3[19].Qs2 = "a.0.67x   b.x-33x   c.0.33x   d.x-33";
    ques_3[19].ans = "a";

    ques_3[20].Qs1 = "n-type semiconductor is an example of";
    ques_3[20].Qs2 = "a. extrinsic semiconductor   b.intrinsic semiconductor   c.super conductor   d.insulator";
    ques_3[20].ans = "a";

    ques_3[21].Qs1 = "What is the formula of iron(III) oxide?";
    ques_3[21].Qs2 = "a.FeO   b.Fe2O3   c.Fe3O2   d.FeO3";
    ques_3[21].ans = "b";

    ques_3[22].Qs1 = "Jerry is a judge. He hears 5 cases every 19/8 hours. How many cases does he hear per hour on average?";
    ques_3[22].Qs2 = "a.19/40   b.8/95   c.40/19   d.95/8";
    ques_3[22].ans = "c";

    ques_3[23].Qs1 = "During the First World War, which country signed the Peace Treaty(1917) with Germeny?";
    ques_3[23].Qs2 = "a.England   b.USA   c.Russia   d.Austria";
    ques_3[23].ans = "c";

    ques_3[24].Qs1 = "The immediate cause for World War One is?";
    ques_3[24].Qs2 = "a.The assassination of Archduke Francis Ferdinand    b.The imprisonment of Lenin   c.The ambition of America to dominate the world   d.The sudden death of Lloyd George";
    ques_3[24].ans = "a";
    }
