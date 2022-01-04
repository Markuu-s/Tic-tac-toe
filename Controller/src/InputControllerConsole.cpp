#include "InputControllerConsole.hpp"
#include <iostream>

std::string InputControllerConsole::getInput()
{
    std::string userMove;
    std::cin >> userMove;
    std::string move = "MOVE_" + userMove;
    return move;
}

InputControllerConsole::~InputControllerConsole()
{
}
