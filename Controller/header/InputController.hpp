#pragma once
#include <string>

class InputController
{
public:
    virtual std::string getInput() = 0;
    virtual ~InputController() = default;
};
