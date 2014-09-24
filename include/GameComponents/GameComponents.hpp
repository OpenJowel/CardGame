#ifndef GAMECOMPONENTS_HPP
#define GAMECOMPONENTS_HPP

#include <vector>
#include <stack>
#include "GameComponents/Player.hpp"
#include "GameComponents/Card.hpp"

class GameComponents
{
    public:

        GameComponents();
        virtual ~GameComponents();

        int                     activePlayer;
        std::vector<Player*>    players;
        std::stack<Card*>       deck;
        std::stack<Card*>       discardPile;
        std::stack<Card*>       gameStack;

    private:

        std::vector<Card> m_cards;
};

#endif // GAMECOMPONENTS_HPP
