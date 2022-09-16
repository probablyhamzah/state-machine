#pragma once

#include "State.hpp"
#include "globals.hpp"
#include "StateMachine.hpp"
#include "AssetManager.hpp"

#include <SFML/Graphics.hpp>

class PlayState : public State
{
private:
    int score;
    sf::RenderWindow* window;
    StateMachine* machine;
    AssetManager* assets;
public:
    PlayState();
    PlayState(sf::RenderWindow* window, StateMachine* machine, AssetManager* assets);
    PlayState(const PlayState& state);
    ~PlayState();

    void processInput();
    void update(sf::Time dt);
    void render();
};
