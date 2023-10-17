#include "poker.h"



Poker::Poker(string color, string point, int score):
    color(color),point(point),score(score)
{

}

void Poker::show()
{
    cout <<color<< point << " ";

}
