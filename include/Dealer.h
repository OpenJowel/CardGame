#ifndef DEALER_H
#define DEALER_H

#include <deque>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Player.h"


class Dealer
{
    public:
        Dealer();
        Dealer(sf::RenderWindow* window);
        virtual ~Dealer();
        void newGame(unsigned int playerQuantity);
		void shuffle();
		void deal();
		void displayPlayers();

        /* Debugging methods */
        void printDeque();


    private:
        std::deque<Card> m_dealingStack;
        std::deque<Card> m_gameStack;
        std::vector<Player> m_players;
        unsigned int m_token;
		sf::RenderWindow* m_window;
		sf::Texture m_cardsTheme;

};

#endif // DEALER_H
