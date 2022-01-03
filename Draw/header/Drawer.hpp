#pragma once
#include <vector>

class Drawer
{
public:
    virtual void draw(std::vector<std::vector<int>> field) = 0;
    virtual ~Drawer() = default;
};
