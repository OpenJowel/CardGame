#include <iostream>
#include <CW/GameEngine.hpp>
#include "States/GamePlayState.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    cw::GameEngine cardGame(sf::VideoMode(1024, 768), "HEPIA Card Game");
    vector<Player*> players;
    cardGame.addState(new GamePlayState(cardGame, players));
    cardGame.run();

    return 0;
}
