#include "Player.h"


Player::Player()
{
    //ctor
}


Player::~Player()
{
    //dtor
}


void Player::drawCard(std::stack<Card* >& deck)
{

}

void Player::takeGameStack(std::stack<Card* >& gameStack)
{

}

void Player::addCard(Card* card, CardGroup group)
{
    switch(group)
    {
    case HAND:
        m_hand.push_back(card);
        m_hand.sort();
        break;
    case FACE_DOWN:
        m_faceDownCards.push_back(card);
        break;
    case FACE_UP:
        m_faceUpCards.push_back(card);
        break;
    }
}

void Player::clearCards()
{
    m_hand.clear();
    m_faceDownCards.clear();
    m_faceDownCards.clear();
}

const std::list<Card*>& Player::getHand() const
{
    return m_hand;
}

const std::vector<Card*>& Player::getFaceUpCards() const
{
    return m_faceUpCards;
}

const std::vector<Card*>& Player::getFaceDownCards() const
{
    return m_faceDownCards;
}
