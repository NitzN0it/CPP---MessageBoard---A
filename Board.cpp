//
// Created by nitzan on 16/03/2021.
//

#include "Board.hpp"
#include <string>
#include <iostream>
using namespace std;
using namespace ariel;
    void Board::post(unsigned int row, unsigned int column, Direction direction, string text) {
        if (direction == Direction::Horizontal)
            row++;
    }

    string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int amount) {
        return "esh";
    }

    string Board::show() {
        return "esh";
    }