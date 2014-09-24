#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <stack>
#include <list>
#include <vector>
#include "GameComponents/Card.hpp"


class Player
{
    public:

        enum CardGroup {FACE_DOWN, FACE_UP, HAND};

        Player();
        virtual ~Player();

        void drawCard(std::stack<Card*>& deck);
        void takeGameStack(std::stack<Card*>& gameStack);

        void addCard(Card* card, CardGroup group);
        void clearCards();

        const std::list<Card*>& getHand() const;
        const std::vector<Card*>& getFaceUpCards() const;
        const std::vector<Card*>& getFaceDownCards() const;

    protected:

        std::list<Card*> m_hand;
        std::vector<Card*> m_faceUpCards;
        std::vector<Card*> m_faceDownCards;
};

#endif // PLAYER_HPP
