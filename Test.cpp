//
// Created by nitzan on 16/03/2021.
//
#include "doctest.h"
#include "Board.hpp"
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Fill an 100 x 100 board 1 by 1")
{
    Board board;
    for (unsigned int i = 0; i < 100; ++i) {
        for (unsigned int j = 0; j < 100; ++j) {
            board.post(i,j,Direction::Horizontal,"Z");
        }
    }
    for (unsigned int i = 0; i < 100; ++i) {
        for (unsigned int j = 0; j < 100; ++j) {
            CHECK(board.read(i,j,Direction::Horizontal,1) == "Z");
        }
    }
}
TEST_CASE("Fill an 100 x 100 board 100 horizontal and then vertical at a time")
{
    Board board, board2;
    string text = "";
    for (int i = 0; i < 100; ++i) {
        text += "Z";
    }
    for (unsigned int i = 0; i < 100; ++i) {
        board.post(i,0,Direction::Horizontal,"Z");
    }
    for (unsigned int i = 0; i < 100; ++i) {
        CHECK(board.read(i,0,Direction::Horizontal,100) == text);
    }
    for (unsigned int i = 0; i < 100; ++i) {
        board2.post(i,0,Direction::Vertical,"Z");
    }
    for (unsigned int i = 0; i < 100; ++i) {
        CHECK(board2.read(i,0,Direction::Vertical,100) == text);
    }
}
TEST_CASE("Fill an 100 X 100 board only in top left and bottom right corners and look for all '_' ")
{
    Board board;
    board.post(0,0,Direction::Horizontal,"A");
    board.post(99,99,Direction::Horizontal,"Z");
    for (unsigned int i = 0; i < 100; ++i) {
        for (unsigned int j = 0; j < 100; ++j) {
            if (((i != 0) && (j != 0)) || ((i != 99) && (j != 99)))
            {
                CHECK(board.read(i,j,ariel::Direction::Horizontal,1) == "_");
            }
        }
    }
}