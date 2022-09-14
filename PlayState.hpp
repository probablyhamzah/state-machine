#include "State.hpp"
#include <SFML/Graphics.hpp>

class PlayState : public State
{
private:
    int score;
    sf::RenderWindow* window;
public:
    PlayState(sf::RenderWindow* window);
    //PlayState(const PlayState& state);
    ~PlayState();

    void enter(const State& state);
    void exit();
    void processInput();
    void update(sf::Time dt);
    void render();
};
