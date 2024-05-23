#pragma once
#include <SFML/Graphics.hpp>

class ToolBox
{
    private:
        ToolBox()
        {
            ;
        };
    public:
        static ToolBox &getInstance()
        // : window(element)
        {
            static ToolBox mine;
            return mine;
        };
        sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(800, 600), "P4 - Minesweeper, Aiden Thomas");
};