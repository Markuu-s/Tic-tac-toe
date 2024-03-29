#pragma once

#include <vector>
#include <string>

class GameLogic
{
private:
    std::vector<std::vector<int>> fieldGame;
    bool tik;

public:
    GameLogic();

    /*
     *  MOVE_XY 
     *  X is vertical
     *  Y is horizon
     * 
     *  1 is win tic (first player) - X
     *  2 is win tac (second player) - 0
     *  3 is draw
     *  0 game is continue
     *  -1 is worst move
     */
    int makeMove(std::string move);
    std::vector<std::vector<int>> getFieldGame();

private:
    int checkWin();
};
