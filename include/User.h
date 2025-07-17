//
// Created by abdo on 7/16/25.
//

#ifndef USER_H
#define USER_H
#include <iostream>
#include "Board.h"




class User {

private:
    std::string username;
    char symbol;
    std::pair<int, int> getPlayerCoordinates(int position, Board& board) const;
    bool isPlayersOwnPiece(const std::pair<int, int>& coordinates, const Board& board) const;
    bool isPlaceOccupied(const std::pair<int, int>& coordinates, const Board& board) const;
    bool isMoveOutOfBounds(int oldPosition, int newPosition, const Board& board) const;
    void applyMove(int oldPosition, int newPosition, Board& board);

public:
    User();
    User(const std::string& username , char symbol);
    std::string getUsername() const ;
    char getSymbol() const ;
    bool movePlayer(int oldPosition , int newPosition , Board& board);
};



#endif //USER_H
