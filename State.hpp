#include <SFML/System/Time.hpp>
#include <SFML/Graphics.hpp>

#pragma once

class State
{
private:
public:
    State() {};
    State(sf::RenderWindow* window) {};
    //State(const State& state) {};
    virtual ~State() {};

    virtual void enter(const State& state) = 0;
    virtual void exit() = 0;
    virtual void processInput() = 0;
    virtual void update(sf::Time dt) = 0;
    virtual void render() = 0;
};
