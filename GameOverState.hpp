#include "State.hpp"

class GameOverState : public State
{
private:
    int score;
public:
    GameOverState();
    GameOverState(const GameOverState& state);
    ~GameOverState();

    void enter(const State& state);
    void exit();
    void update(sf::Time dt);
    void render();
};
