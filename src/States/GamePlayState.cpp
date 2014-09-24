#include "States/GamePlayState.hpp"

GamePlayState::GamePlayState(cw::GameEngine& engine, std::vector<Player*>& players) : GameState(engine), m_dealer(m_gameComponents)
{

}

GamePlayState::~GamePlayState()
{
}


void GamePlayState::handleEvents(const sf::Event& ev)
{
    if(ev.type == sf::Event::Closed)
    {
        m_engine.stop();
    }
    else if(ev.type == sf::Event::KeyPressed)
    {
        switch(ev.key.code)
        {
        case sf::Keyboard::Escape:
            m_engine.stop();
            break;

        default:
            break;
        }
    }
}


void GamePlayState::update()
{

}


void GamePlayState::render(sf::RenderTarget& target, float interpolation)
{

}
