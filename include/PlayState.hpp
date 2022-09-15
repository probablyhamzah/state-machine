#pragma once

#include "State.hpp"
#include "globals.hpp"

#include "StateMachine.hpp"
#include <SFML/Graphics.hpp>

class PlayState : public State
{
private:
    int score;
    sf::RenderWindow* window;
    StateMachine* machine;
public:
    PlayState();
    PlayState(sf::RenderWindow* window, StateMachine* machine);
    PlayState(const PlayState& state);
    ~PlayState();

    void enter(const State& state);
    void exit();
    void processInput();
    void update(sf::Time dt);
    void render();
};
