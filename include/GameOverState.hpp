#pragma once

#include "State.hpp"
#include "StateMachine.hpp"

#include <SFML/Graphics.hpp>

class GameOverState : public State
{
private:
    int score;
    sf::RenderWindow* window;
public:
    GameOverState();
    GameOverState(sf::RenderWindow* window);
    GameOverState(const GameOverState& state);
    ~GameOverState();

    void enter(const State& state);
    void exit();
    void processInput();
    void update(sf::Time dt);
    void render();
};
