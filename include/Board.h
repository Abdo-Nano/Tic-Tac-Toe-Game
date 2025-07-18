//
// Created by abdo on 7/16/25.
//

#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <unordered_map>


class User;

class Board {

private:
    char board[3][3];
    int rows = 3;
    int cols = 3;
    std::unordered_map<int , std::pair<int , int>> moves;


    std::pair<int, int> getPlayerCoordinates(int position);
    bool isPlayersOwnPiece(const std::pair<int, int>& coordinates, User& user) const;
    bool isPlaceOccupied(const std::pair<int, int>& coordinates , User& user) const;
    bool isMoveOutOfBounds(int oldPosition, int newPosition) const;
    void applyMove(int oldPosition, int newPosition , User& user);


public:
    Board();
    void drawBoard();
    void resetBoard();
    bool winningShapes(char player);
    bool movePlayer(int oldPosition , int newPosition , User& user);
    friend class User;
};



#endif //BOARD_H
