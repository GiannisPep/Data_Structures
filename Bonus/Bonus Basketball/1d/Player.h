#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
    private:
        string name;
        string surname;
    public:
        Player(const string& name,const string& surname);
        string getName() const;
        string getSurname() const;
        virtual string getPlayerDescription() const;
};
#endif