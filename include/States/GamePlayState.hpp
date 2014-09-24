#ifndef GAMEPLAYSTATE_HPP
#define GAMEPLAYSTATE_HPP

#include <CW/GameState.hpp>
#include <SFML/System/Clock.hpp>
#include <vector>
#include "GameComponents/GameComponents.hpp"
#include "GameComponents/Dealer.hpp"

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

#endif // GAMEPLAYSTATE_HPP
