#include <iostream>
#include "GameOverState.hpp"

GameOverState::GameOverState()
{
    window = NULL;
}

GameOverState::GameOverState(sf::RenderWindow* window, StateMachine* machine)
{
    this->window = window;
    this->machine = machine;
    std::cout << "gameoverstate default constructor\n";
}

GameOverState::GameOverState(const GameOverState& state)
{
    std::cout << "gameoverstate copy constructor\n";
}

GameOverState::~GameOverState()
{
    std::cout << "gameoverstate destructor\n";
}

void GameOverState::enter(const State& state)
{
    std::cout << "gameoverstate enter\n";
}

void GameOverState::exit()
{
    std::cout << "gameoverstate exit\n";
}

void GameOverState::processInput()
{
}

void GameOverState::update(sf::Time dt)
{
    std::cout << "gameoverstate update\n";
}

void GameOverState::render()
{
    std::cout << "gameoverstate render\n";
}
