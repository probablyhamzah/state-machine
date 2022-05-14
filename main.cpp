#include <iostream>
#include "StateMachine.hpp"
#include "PlayState.hpp"
#include "GameOverState.hpp"
int main()
{
    PlayState* play = new PlayState();
    GameOverState* gameover = new GameOverState();
    
    std::map<int, State*> states;
    states[PLAY_STATE] = play;
    states[GAME_OVER_STATE] = gameover;
    StateMachine machine(states);
    
    sf::Time dt = sf::Time::Zero;

    PlayState* newState = new PlayState();
    machine.change(PLAY_STATE, newState);
    machine.update(dt);

    machine.change(GAME_OVER_STATE);
    machine.update(dt);
    
}
