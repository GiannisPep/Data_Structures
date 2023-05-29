#include "BasketballPlayer.h"

BasketballPlayer::BasketballPlayer(string& name,string& surname,string& position) : Player(name,surname){
    if (position.length()<3)
        this->position="unknown";
    else
        this->position=position;
}

string BasketballPlayer::getPlayerDescription(){
    return getName()+"-"+getSurname()+"-"+position;
}