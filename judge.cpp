#include "judge.h"
#include <ctime>
#include <cstdlib>
Judge::Judge()
{
    srand(time(0));
    PokerManager* pm = PokerManager::getPokerManager();
    for(int i = 0;i<pm->color_vec.size();i++){
        for(int j =0;j<pm->point_vec.size();j++){
            Poker p(pm->color_vec[i],pm->point_vec[j],
                    pm->score_map[pm->point_vec[j]]);

            pokerBox.push_back(p);
        }
    }
}

Judge::~Judge()
{

}

void Judge::shuffle()
{
    for(int i = 0;i<50;i++){
        int r1 = rand()%52;
        int r2 = rand()%52;
        Poker p = pokerBox[r1];
        pokerBox[r1] = pokerBox[r2];
        pokerBox[r2] = p;
    }

}

Poker Judge::deal()
{
    Poker p = pokerBox.back();
    pokerBox.pop_back();
    return p;
}

