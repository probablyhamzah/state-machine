#include <iostream>
#include "PlayState.hpp"

PlayState::PlayState()
{
    window = NULL;
    machine = NULL;
}

PlayState::PlayState(sf::RenderWindow* window, StateMachine* machine)
{
    this->window = window;
    this->machine = machine;
}

PlayState::PlayState(const PlayState& state)
{
    std::cout << "playstate copy constructor\n";
}

PlayState::~PlayState()
{
    std::cout << "playstate destructor\n";
}

void PlayState::processInput()
{
    if (window == NULL)
        return;
    
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
        else if (event.type == sf::Event::KeyPressed)
        {
            switch (event.key.code)
            {
            case sf::Keyboard::C:
                this->machine->change(GAME_OVER_STATE);
                break;
            default:
                break;
            }
        }
    }
}

void PlayState::enter(const State& state)
{
    std::cout << "playstate enter\n";
}

void PlayState::exit()
{
    std::cout << "playstate exit\n";
}

void PlayState::update(sf::Time dt)
{
    std::cout << "playstate update\n";
}

void PlayState::render()
{
    std::cout << "playstate render\n";
}
