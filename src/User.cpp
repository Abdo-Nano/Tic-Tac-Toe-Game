//
// Created by abdo on 7/16/25.
//

#include "../include/User.h"


User::User() = default;

User::User(const std::string &username , char symbol) {
    this->username = username;
    this->symbol = symbol;
}

char User::getSymbol() const {
    return this->symbol;
}

std::string User::getUsername() const {
    return this->username;
}

bool User::isMoveOutOfBounds(int oldPosition, int newPosition,const Board &board) const {
    return board.moves.find(oldPosition) == board.moves.end() ||
       board.moves.find(newPosition) == board.moves.end();
}


std::pair<int , int> User::getPlayerCoordinates(int position ,Board& board)const {
    return board.moves[position];
}

bool User::isPlayersOwnPiece(const std::pair<int, int> &coordinates,const Board &board) const{
    return board.board[coordinates.first][coordinates.second] != symbol;
}

bool User::isPlaceOccupied(const std::pair<int, int>& newCoordinates ,const Board& board)const {
    char otherPlayer = (symbol == 'o')? 'x' : 'o';
    return board.board[newCoordinates.first][newCoordinates.second] == otherPlayer
    || board.board[newCoordinates.first][newCoordinates.second] == symbol;
}

void User::applyMove(int oldPosition, int newPosition, Board &board) {

    std::pair<int , int> oldCoordinates = getPlayerCoordinates(oldPosition, board);
    std::pair<int , int> newCoordinates = getPlayerCoordinates(newPosition , board);

    board.board[oldCoordinates.first][oldCoordinates.second] = oldPosition + '0';
    board.board[newCoordinates.first][newCoordinates.second] = symbol;
}



bool User::movePlayer(int oldPosition, int newPosition, Board &board) {
    if (isMoveOutOfBounds(oldPosition , newPosition , board)) {
        std::cout << "Out of the boundaries of the board." << std::endl;
        return false;
    }

    std::pair<int , int> oldCoordinates = getPlayerCoordinates(oldPosition, board);
    std::pair<int , int> newCoordinates = getPlayerCoordinates(newPosition , board);

    if (isPlaceOccupied(newCoordinates  , board)) {
        std::cout << "enter empty place number" << std::endl;
        return false;
    }

    if (isPlayersOwnPiece(oldCoordinates , board)) {
        std::cout << "just move your own yard" << std::endl;
        return false;
    }

    applyMove(oldPosition , newPosition , board);
    return true;
}



