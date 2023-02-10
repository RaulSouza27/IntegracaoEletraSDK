#pragma once

#include <string>
#include <iostream>
#include <vector>

class Religadores
{
    public:
    void display_religadores();
    private:
        const std::vector<std::string> religadores = {"religador 1", "religador 2", "religador 3"};
};