#include "BasketballPlayer.h"

BasketballPlayer::BasketballPlayer(string& name,string& surname,string& position) : Player(name,surname){
    this->position=position;
}