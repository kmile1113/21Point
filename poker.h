#ifndef POKER_H
#define POKER_H

#include "pokermanager.h"

class Poker
{
public:
    string color;
    string point;
    int score;
public:
    Poker(string color,string point,int score);
    void show();

};

#endif // POKER_H
