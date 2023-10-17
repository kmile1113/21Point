#include "logic.h"
#include "player.h"
#include "judge.h"

Logic::Logic()
{

}

Logic::~Logic()
{

}

void Logic::run()
{
    Judge judge;
    judge.shuffle();

    cout << "请输入玩家数量:";
    int player_num;
    cin>> player_num;

    vector<Player> players;

    for(int i = 0;i<player_num;i++){
        cout <<"请输入玩家名：" ;
        string name;
        cin >> name;
        players.push_back(Player(name));
    }

    //起始手牌
    for(int j = 0;j<2;j++){
        for(int i = 0;i<player_num;i++){
            players[i].addHands(judge.deal());
        }
    }

    int a = 0;
    while(a != player_num){
        for(int i = 0;i<player_num;i++){
            players[i].showHands();
        }
        for(int i = 0;i<player_num;i++){
            if(players[i].isFinish == false){
                cout << players[i].name << "，请问您还要牌吗？(y or n)";
                string answer;
                cin >> answer;
                if(answer == "y"){
                    players[i].addHands(judge.deal());
                }else{
                    a++;
                    players[i].isFinish = true;
                }
            }
        }
    }
    for(int i = 0;i<player_num;i++){
        cout <<players[i].name<<":" << players[i].total() << endl;
    }

}

