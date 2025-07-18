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



