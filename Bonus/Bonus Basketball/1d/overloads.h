#ifndef OVERLOADS_H
#define OVERLOADS_H

#include "BasketballPlayer.h"
#include "Comparator.h"

#include <iostream>

using namespace std;

ostream& operator<<(ostream& os,const BasketballPlayer& Player){
    os << Player.getPlayerDescription();
    return os;
}

bool operator==(const BasketballPlayer& Player1,const BasketballPlayer& Player2){
    return Player1.getPosition()==Player2.getPosition();
}

bool operator!=(BasketballPlayer other1,BasketballPlayer other2){
  return !(other1.getPlayerDescription() == other2.getPlayerDescription());
}

template<typename T> void print(const T& x){
    cout << x << endl;
}
#endif