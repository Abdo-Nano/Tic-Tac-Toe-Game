//
// Created by abdo on 7/16/25.
//

#include "../include/Board.h"



Board::Board():
    board{
        {'x' , 'x' , 'x'},
        {'4' , '5' , '6'},
        {'o' , 'o' , 'o'},
    },
    moves {
        {1 , {0 , 0}},
        {2,  {0 , 1}},
        {3 , {0 , 2}},
        {4 , {1 , 0}},
        {5 , {1 , 1}},
        {6 , {1 , 2}},
        {7 , {2 , 0}},
        {8 , {2 , 1}},
        {9 , {2 , 2}},
    }{}

void Board::drawBoard() {
    for (int i = 0 ;i < 11;i++) {
        std::cout << '-';
    }
    std::cout << std::endl;
    int index = 1;
    for (int i = 0 ;i < rows ;i++) {
        std::cout << "|";
        for (int j = 0 ;j < cols;j++) {
            std::cout << " " <<  board[i][j] << " |";
        }
        std::cout << std::endl;
    }

    for (int i = 0 ;i < 11;i++) {
        std::cout << '-';
    }
    std::cout << std::endl;
}

void Board::resetBoard() {
    char another[3][3] = {
        {'x' , 'x' , 'x'},
        {'4' , '5' , '6'},
        {'o' , 'o' , 'o'},
    };

    for (int row = 0 ; row < 3 ;row++) {
        for (int col = 0 ; col < 3; col++) {
            board[row][col] = another[row][col];
        }
    }
}

bool Board::winningShapes(char player) {

    if (board[moves[4].first][moves[4].second] == player &&
       board[moves[5].first][moves[6].second] == player &&
       board[moves[6].first][moves[47].second] == player)
        return true;

    if (board[moves[3].first][moves[3].second] == player &&
        board[moves[5].first][moves[5].second] == player &&
        board[moves[7].first][moves[7].second] == player)
        return true;

    if (board[moves[1].first][moves[1].second] == player &&
       board[moves[5].first][moves[5].second] == player &&
       board[moves[9].first][moves[9].second] == player)
        return true;

    if (board[moves[2].first][moves[2].second] == player &&
        board[moves[5].first][moves[5].second] == player &&
        board[moves[8].first][moves[8].second] == player)
        return true;


    if (board[moves[3].first][moves[3].second] == player &&
       board[moves[6].first][moves[6].second] == player &&
       board[moves[9].first][moves[9].second] == player)
        return true;

    if (board[moves[1].first][moves[1].second] == player &&
        board[moves[4].first][moves[4].second] == player &&
        board[moves[7].first][moves[7].second] == player)
        return true;

    return false;
}
