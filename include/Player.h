#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <list>
#include "Card.h"


class Player
{
    public:
        Player();
        //Player(unsigned int posX, unsigned int posY);
        Player(unsigned int angle);
        virtual ~Player();
        void receiveCardFromDealer(Card card);
        void pickCard(Card card);
        void takeGameStack(std::list<Card> gameStack);
        std::list<Card> handCards() const;
        std::list<Card> faceUpCards() const;
        std::list<Card> faceDownCards() const;


    private:
    	//sf::Vector2<unsigned int> m_position;
		unsigned int m_angle;
        std::list<Card> m_handCards;
        std::list<Card> m_faceUpCards;
        std::list<Card> m_faceDownCards;
};

#endif // PLAYER_H
