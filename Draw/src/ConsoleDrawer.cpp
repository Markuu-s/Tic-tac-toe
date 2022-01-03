#include "ConsoleDrawer.hpp"
#include <iostream>
#include <functional>
#include <string>

void ConsoleDrawer::draw(std::vector<std::vector<int>> field)
{
    std::function<char(int)> specialDrawer = [](int x)
    {
        if (x == 0)
            return ' ';
        if (x == 1)
            return 'X';
        if (x == 2)
            return '0';
        return '@';
    };

    std::cout
        << "\t|0|\t|1|\t|2|\n";
    std::string separater = "___________________________";
    std::cout << separater << '\n';
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "|" << i << "|\t";
        for (int j = 0; j < 3; ++j)
        {
            std::cout << '|' << specialDrawer(field[i][j]) << "|\t";
        }
        std::cout << '\n'
                  << separater << '\n';
    }
}

ConsoleDrawer::~ConsoleDrawer()
{
}
