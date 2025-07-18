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
public:
    User();
    User(const std::string& username , char symbol);
    std::string getUsername() const ;
    char getSymbol() const ;
};



#endif //USER_H
