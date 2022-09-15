# State Machine

A basic state machine implementation in C++ for games.
The State Machine takes a map of the state names to the states as input. The machine can then switch from one state to another, update a state, render the state or add a new state and switch to it.

## Usage
Add the state machine to your game
```cpp
#include "StateMachine.hpp"
```

And any states you've defined. In this repo, PlayState and GameOverState have been provided.
```cpp
#include "PlayState.hpp"
#include "GameOverState.hpp"
```

Initialize your states
```cpp
PlayState* play = new PlayState();
GameOverState* gameover = new GameOverState();
```

Map the state names (defined in StateMachine.hpp) to the states we have just initialized. This map will then be passed as a parameter to the state machine.
```cpp
std::map<int, State*> states;
states[PLAY_STATE] = play;
states[GAME_OVER_STATE] = gameover;
StateMachine machine;
machine.setStates(states);
```

You can now update, render, or change to a different state. The state machine keeps track of which state is currently running and performs the functions accordingly.
```cpp
machine.change(PLAY_STATE); // PLAY_STATE is our current state now.
sf::Time dt = sf::Time::Zero; // Using SFML here.

machine.update(dt); // update PLAY_STATE
machine.render(); // render PLAY_STATE


machine.change(GAME_OVER_STATE); // switch to GAME_OVER_STATE
machine.update(dt); // update GAME_OVER_STATE
    
PlayState* newState = new PlayState(states); // Create a new state...
machine.change(PLAY_STATE, newState); // ...and switch to it.
// The existing PLAY_STATE will be overwritten by the new one.

machine.update(dt); // update PLAY_STATE
```

## Compiling the program
I'm using SFML in this state machine. Firstly, install SFML
```bash
sudo apt-get install libsfml-dev
```

Compile the program
```cpp
g++ main.cpp StateMachine.cpp PlayState.cpp GameOverState.cpp -lsfml-system
```
 
## Notes
For the purpose of testing, I have provided a PlayState and a GameOverState with functions that print their names on stdout. When adding more states, make sure the new state names are added in StateMachine.hpp.