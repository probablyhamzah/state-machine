#include "State.hpp"

class PlayState : public State
{
private:
    int score;
public:
    PlayState();
    PlayState(const PlayState& state);
    ~PlayState();

    void enter();
    void exit();
    void update(sf::Time dt);
    void render();
};
