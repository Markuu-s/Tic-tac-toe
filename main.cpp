#include "ConsoleDrawer.hpp"
#include "GameLogic.hpp"
#include <string>
#include <iostream>

int main()
{
    GameLogic game;

    Drawer *drawer = new ConsoleDrawer();
    bool gameBool = true;
    while (gameBool)
    {
        drawer->draw(game.getFieldGame());
        std::string userMove;
        std::cin >> userMove;
        std::string move = "MOVE_" + userMove;
        int a = game.makeMove(move);
        std::cout << a;
        gameBool = !a;
    }
    return 0;
}
