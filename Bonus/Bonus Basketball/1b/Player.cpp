#include "Player.h"

using namespace std;

Player::Player(string& name,string& surname){
    this->name=name;
    this->surname=surname;
}

string Player::getPlayerDescription(){
    return getName()+"-"+getSurname();
}