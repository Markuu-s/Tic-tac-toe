#include "ConsoleDrawer.hpp"
#include "GameLogic.hpp"
#include "InputControllerConsole.hpp"
#include <string>
#include <iostream>

int main()
{
    GameLogic game;

    Drawer *drawer = new ConsoleDrawer();
    InputController *inputController = new InputControllerConsole();

    bool gameBool = true;
    while (gameBool)
    {
        drawer->draw(game.getFieldGame());
        std::string move = inputController->getInput();
        int a = game.makeMove(move);
        std::cout << a;
        gameBool = !a;
    }
    return 0;
}
