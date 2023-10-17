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

    cout << "�������������:";
    int player_num;
    cin>> player_num;

    vector<Player> players;

    for(int i = 0;i<player_num;i++){
        cout <<"�������������" ;
        string name;
        cin >> name;
        players.push_back(Player(name));
    }

    //��ʼ����
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
                cout << players[i].name << "����������Ҫ����(y or n)";
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

