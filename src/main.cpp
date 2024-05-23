#include <iostream>
#include "Toolbox.h"

int main(int, char**){
    ToolBox &toolbox = ToolBox::getInstance();
    while(toolbox.window.isOpen())
    {
        sf::Event event;
        while (toolbox.window.pollEvent(event))
        {
            
            // Request for closing the window
            if (event.type == sf::Event::Closed)
                toolbox.window.close();
        }
    }
}
