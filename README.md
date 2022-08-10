# State Machine

A basic state machine implementation in C++ for games.
Example usage provided in main.cpp.

## Usage
The statemachine takes a map of the statenames to the states as input. The machine can then switch from one state to another, update a state, render the state or add a new state and switch to it.
The following functions are provided with the statemachine: 
change():
    Takes parameters stateName and state. When adding a new state, both statename and state have to be passed. To change to an existing state, only the statename has to be passed. State names are defined as enums.
update():
    Takes deltatime as input and updates the current state.
render():
    Renders the current state.

## Notes
For the purpose of testing, I have provided a PlayState and a GameOverState with functions that print their names on stdout. When adding more states, make sure the new state names are added in StateMachine.hpp.