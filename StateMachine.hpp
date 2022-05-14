#include "State.hpp"
#include <string>
#include <map>
#include <memory>

typedef enum GAME_STATE
{
    PLAY_STATE,
    GAME_OVER_STATE
} GAME_STATE;

typedef enum PLAYER_STATE
{
    
} PLAYER_STATE;

class StateMachine
{
private:
    std::map<int, State*> states;
    int current;
public:
    StateMachine();
    StateMachine(std::map<int, State*> states);
    void change(int stateName, State* state = nullptr);
    void update(sf::Time dt);
    void render();
};
