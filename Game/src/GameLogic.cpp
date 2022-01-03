#include "GameLogic.hpp"
#include <functional>

GameLogic::GameLogic() : tik(true)
{
    fieldGame.resize(3, std::vector<int>(3, 0));
}

int GameLogic::makeMove(std::string move)
{
    if (move.size() != 7)
    {
        return -1;
    }

    if (move.substr(0, 4) != "MOVE")
    {
        return -1;
    }

    std::function<bool(char)> checkNum = [](char ch)
    {
        if (ch >= '0' && ch <= '2')
        {
            return true;
        }
        return false;
    };

    if (!checkNum(move[5]) || !checkNum(move[6]))
    {
        return -1;
    }

    int x = move[5] - '0';
    int y = move[6] - '0';

    if (fieldGame[x][y])
    {
        return -1;
    }

    fieldGame[x][y] = 1 + int(!tik);
    tik = !tik;
    
    return checkWin();
}

std::vector<std::vector<int>> GameLogic::getFieldGame() { return fieldGame; }

int GameLogic::checkWin()
{
    for (int i = 0; i < 3; ++i)
    {
        if (fieldGame[i][0] == fieldGame[i][1] &&
            fieldGame[i][1] == fieldGame[i][2] && fieldGame[i][2] != 0)
        {
            return fieldGame[i][0];
        }

        if (fieldGame[0][i] == fieldGame[1][i] &&
            fieldGame[1][i] == fieldGame[2][i] && fieldGame[2][i] != 0)
        {
            return fieldGame[0][i];
        }
    }

    if (fieldGame[0][0] == fieldGame[1][1] &&
        fieldGame[1][1] == fieldGame[2][2] && fieldGame[2][2] != 0)
    {
        return fieldGame[0][0];
    }

    if (fieldGame[0][2] == fieldGame[1][1] &&
        fieldGame[1][1] == fieldGame[2][0] && fieldGame[2][0] != 0)
    {
        return fieldGame[2][0];
    }

    bool isDraw = true;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j< 3; ++j)
        {
            if (!fieldGame[i][j]) {
                isDraw = false;
            }
        }
    }

    return (isDraw ? 3 : 0);
}