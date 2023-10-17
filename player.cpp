#include "player.h"



Player::Player(string name):name(name)
{
    isFinish = false;
}

Player::~Player()
{

}

void Player::addHands(const Poker &p){
    hands.push_back(p);
}

void Player::showHands()
{
    cout << name << ":";
    for(int i= 0;i<hands.size();i++){
        hands[i].show();
    }
    cout << endl;
}

int Player::total()
{
    int sum = 0;
    int A_count = 0;
    for(int i = 0;i<hands.size();i++){
        if(hands[i].point == "A"){
            A_count ++;
        }
        sum += hands[i].score;
    }
    while(sum > 21 && A_count != 0){
       //降A的分
        sum-=10;
        A_count--;
    }

    return sum;
}

