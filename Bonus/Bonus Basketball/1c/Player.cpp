#include "Player.h"

using namespace std;

Player::Player(const string& name,const string& surname){
    this->name=name;
    this->surname=surname;
}

string Player::getName() const {
    return name;
}

string Player::getSurname() const {
    return surname;
}

string Player::getPlayerDescription() const{
    return getName()+"-"+getSurname();
}