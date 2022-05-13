#include "StateMachine.hpp"
#include <iostream>

StateMachine::StateMachine()
{
}

StateMachine::StateMachine(std::map<std::string, State*> states)
{
    this->states = states;
}

void StateMachine::change(std::string stateName, State& state)
{
    *(this->states[stateName]) = state;
    this->current = stateName;
}

void StateMachine::update(sf::Time dt)
{
    this->states[current]->update(dt);
}

void StateMachine::render()
{
}
