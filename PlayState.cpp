#include <iostream>
#include "PlayState.hpp"

PlayState::PlayState()
{
    std::cout << "default constructor\n";
}

PlayState::PlayState(const PlayState& state)
{
    std::cout << "copy constructor\n";
}

PlayState::~PlayState()
{
    std::cout << "destructor\n";
}

void PlayState::enter()
{
    std::cout << "enter\n";
}

void PlayState::exit()
{
    std::cout << "exit\n";
}

void PlayState::update(sf::Time dt)
{
    std::cout << "update\n";
}

void PlayState::render()
{
    std::cout << "render\n";
}
