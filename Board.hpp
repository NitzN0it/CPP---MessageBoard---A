//
// Created by nitzan on 16/03/2021.
//

#ifndef MESSAGEBOARD_BOARD_H
#define MESSAGEBOARD_BOARD_H
#include <string>
#include "Direction.hpp"
#include <vector>
using namespace std;

namespace ariel {
    class Board {
        vector<string> msgs;
    public:
        void post(unsigned int row, unsigned int column, Direction direction, string text);
        string read(unsigned int row, unsigned int column, Direction direction, unsigned int amount);
        string show();
    };
}

#endif //MESSAGEBOARD_BOARD_H
