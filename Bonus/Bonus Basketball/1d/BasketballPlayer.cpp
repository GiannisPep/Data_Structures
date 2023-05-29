#include "BasketballPlayer.h"

BasketballPlayer::BasketballPlayer(const string& name,const string& surname,const string& position) : Player(name,surname){
    if (position.length()<3)
        this->position="unknown";
    else
        this->position=position;
}

string BasketballPlayer::getPosition() const {
    return position;
}

string BasketballPlayer::getPlayerDescription() const{
    return getName()+"-"+getSurname()+"-"+position;
}