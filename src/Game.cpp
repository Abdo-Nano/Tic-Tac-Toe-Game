//
// Created by abdo on 7/16/25.
//

#include "../include/Game.h"



void Game::setUsersData() {
    std::string firstUsername;
    std::cout << "enter first username: "; std::cin >> firstUsername;
    this->first = User(firstUsername , 'x');
    std::cout << "you are X symbol." << std::endl;

    std::string secondUsername;
    std::cout << "enter first username: "; std::cin >> secondUsername;
    this->second = User(secondUsername , 'o');
    std::cout << "you are O symbol." << std::endl;
}


void Game::mainGame() {
    // initialize the two users
    setUsersData();
    bool switchPlayer = true;
    User player;
    while (true) {
        board.drawBoard();

        if (switchPlayer) {
            player = first;
        } else {
            player = second;
        }

        int oldPosition;
        int newPosition;
        std::cout << "old position for player: " << player.getSymbol() << ": "; std::cin >> oldPosition;
        std::cout << "new position for player: " << player.getSymbol() << ": "; std::cin >> newPosition;


        // swap the switch player if move is done correctly
        if (player.movePlayer(oldPosition , newPosition , board)) {
            switchPlayer = (switchPlayer == true)? false : true;
        }
        if (board.winningShapes(player.getSymbol())) {
            std::cout << "the winner is: " << first.getUsername() << std::endl;
            return;
        }
    }
}