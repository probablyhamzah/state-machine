#include "State.hpp"
#include <string>
#include <map>
#include <memory>

class StateMachine
{
private:
    std::map<std::string, State*> states;
    std::string current;
public:
    StateMachine();
    StateMachine(std::map<std::string, State*> states);
    void change(std::string stateName, State& state);
    void update(sf::Time dt);
    void render();
};
