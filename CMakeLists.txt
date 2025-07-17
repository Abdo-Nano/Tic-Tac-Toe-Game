cmake_minimum_required(VERSION 3.31)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 23)

add_executable(Tic_Tac_Toe src/main.cpp
        src/User.cpp
        include/User.h
        src/Board.cpp
        include/Board.h
        src/Game.cpp
        include/Game.h)
