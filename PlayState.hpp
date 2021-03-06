#include "State.hpp"

class PlayState : public State
{
private:
    int score;
public:
    PlayState();
    PlayState(const PlayState& state);
    ~PlayState();

    void enter(const State& state);
    void exit();
    void update(sf::Time dt);
    void render();
};
