#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <poker.h>
using namespace std;

class Player
{
public:
    string name;
    vector<Poker> hands;
    bool isFinish;
    Player(string name);
    ~Player();

    void addHands(const Poker& p);
    void showHands();
    int total();
};

#endif // PLAYER_H
