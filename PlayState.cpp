#include <iostream>
#include "PlayState.hpp"

PlayState::PlayState()
{
    std::cout << "playstate default constructor\n";
}

PlayState::PlayState(const PlayState& state)
{
    std::cout << "playstate copy constructor\n";
}

PlayState::~PlayState()
{
    std::cout << "playstate destructor\n";
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
