#include "Player.h"

using namespace std;


Player::Player()
{
    //ctor
}


Player::Player(unsigned int angle)
{
	m_angle = angle;
}


Player::~Player()
{
    //dtor
}


/* Places the cards at the right place when the dealer gives it */
void Player::receiveCardFromDealer(Card card)
{
	card.setAngle(m_angle);

	if(m_faceDownCards.size() < 3)
	{
		card.hide();
		m_faceDownCards.push_back(card);
	}
	else if(m_faceUpCards.size() < 3)
	{
		card.show();
		m_faceUpCards.push_back(card);
	}
	else
	{
		card.show();
		m_handCards.push_back(card);
	}
}


void Player::pickCard(Card card)
{

}


void Player::takeGameStack(list<Card> gameStack)
{

}


list<Card> Player::handCards() const
{
	return m_handCards;
}


list<Card> Player::faceUpCards() const
{
	return m_faceUpCards;
}


list<Card> Player::faceDownCards() const
{
	return m_faceDownCards;
}
