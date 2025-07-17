//
// Created by abdo on 7/16/25.
//

#ifndef GAME_H
#define GAME_H
#include <unordered_map>

#include "User.h"
#include "Board.h"



class Game {

private:
    Board board;
    User first;
    User second;

public:
    void mainGame();
    void setUsersData();
};



#endif //GAME_H
