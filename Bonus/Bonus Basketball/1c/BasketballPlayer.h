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
        BasketballPlayer(const string& name,const string& surname,const string& position);
        string getPosition() const;
        string getPlayerDescription() const override;
};
#endif