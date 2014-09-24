#ifndef GAMEPLAYSTATE_H
#define GAMEPLAYSTATE_H

#include <CW/GameState.hpp>
#include <SFML/System/Clock.hpp>
#include <vector>
#include "GameComponents.hpp"
#include "Dealer.h"

#define TURN_DURATION 10

class GamePlayState : public cw::GameState
{
    public:

        GamePlayState(cw::GameEngine& engine, std::vector<Player*>& players);
        virtual ~GamePlayState();

        void handleEvents(const sf::Event& ev);
        void update();
        void render(sf::RenderTarget& target, float interpolation = 0);


    protected:



    private:

        GameComponents  m_gameComponents;
        Dealer          m_dealer;
        sf::Clock       m_turnTimer;
};

#endif // GAMEPLAYSTATE_H
