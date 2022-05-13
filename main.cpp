#include <iostream>
#include "StateMachine.hpp"
#include "PlayState.hpp"

int main()
{
    PlayState* play = new PlayState();
    std::map<std::string, State*> states;
    states["play-state"] = play;
    StateMachine machine(states);
    
    sf::Time dt = sf::Time::Zero;

    PlayState newState;
    machine.change("play-state", newState);
    machine.update(dt);
    delete play;
}
