#include "State.hpp"
#include <SFML/Graphics.hpp>

class GameOverState : public State
{
private:
    int score;
    sf::RenderWindow* window;
public:
    GameOverState(sf::RenderWindow* window);
    GameOverState(const GameOverState& state);
    ~GameOverState();

    void enter(const State& state);
    void exit();
    void processInput();
    void update(sf::Time dt);
    void render();
};
