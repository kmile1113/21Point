#include "pokermanager.h"

PokerManager* PokerManager::pm = NULL;

PokerManager::PokerManager()
{
    color_vec.push_back("ºìĞÄ");
    color_vec.push_back("ºÚÌÒ");
    color_vec.push_back("·½Æ¬");
    color_vec.push_back("Ã·»¨");

    for(int i = 1;i<=13;i++){
        if(i == 1){
            point_vec.push_back("A");
            score_map["A"] = 11;
        }else if(i == 11){
            point_vec.push_back("J");
            score_map["J"] = 10;
        }else if(i == 12){
            point_vec.push_back("Q");
            score_map["Q"] = 10;
        }else if(i == 13){
            point_vec.push_back("K");
            score_map["K"] = 10;
        }else{
            char c[2];
            sprintf(c,"%d",i);
            point_vec.push_back(c);
            score_map[c] = i;
        }

    }
}

PokerManager::PokerManager(const PokerManager &p)
{

}

PokerManager *PokerManager::getPokerManager()
{
    if(pm == NULL){
        pm = new PokerManager;
    }
    return pm;
}




