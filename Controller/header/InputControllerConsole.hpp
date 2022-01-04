#pragma once
#include "InputController.hpp"

class InputControllerConsole : public InputController
{
public:
    virtual std::string getInput() override;
    virtual ~InputControllerConsole();
};
