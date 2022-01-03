#pragma once
#include "Drawer.hpp"

class ConsoleDrawer : public Drawer
{
public:
    virtual void draw(std::vector<std::vector<int>> field) override;
    virtual ~ConsoleDrawer();
};
