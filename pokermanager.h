#ifndef POKERMANAGER_H
#define POKERMANAGER_H

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class PokerManager
{
private:
    PokerManager();
    PokerManager(const PokerManager& p);
    static PokerManager* pm;

public:
    static PokerManager* getPokerManager();

public:
    vector<string> color_vec;
    vector<string> point_vec;
    map<string,int> score_map;



};

#endif // POKERMANAGER_H
