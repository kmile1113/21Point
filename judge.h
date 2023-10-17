#ifndef JUDGE_H
#define JUDGE_H

#include "pokermanager.h"
#include "poker.h"


class Judge
{
public:
    Judge();
    ~Judge();

    //牌盒
    vector<Poker> pokerBox;


    //洗牌
    void shuffle();

    //发牌
    Poker deal();
};

#endif // JUDGE_H
