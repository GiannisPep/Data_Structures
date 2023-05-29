#ifndef BASKETBALLPLAYER_H
#define BASKETBALLPLAYER_H

using namespace std;

#include <string>
#include "Player.h"

class BasketballPlayer : public Player
{
    private:
        string position;
    public:
        BasketballPlayer(string& name,string& surname,string& position);
        string getPosition(){return position;}
};
#endif