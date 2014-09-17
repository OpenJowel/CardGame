#include "Card.h"

using namespace std;

Card::Card()
{
    //ctor
}


Card::Card(unsigned int face, unsigned int suit, int posX, int posY, sf::Texture* texture) : 	m_face(face),
																								m_suit(suit),
																								m_faceUp(false),
																								m_position(posX, posY),
																								m_texture(texture),
																								m_width(79),
																								m_height(123)

{

}


Card::~Card()
{

}


unsigned int Card::face()
{
	return m_face;
}


unsigned int Card::suit()
{
	return m_suit;
}

void Card::show()
{
	m_faceUp = true;
}


void Card::hide()
{
	m_faceUp = false;
}


void Card::setPosition(unsigned int posX, unsigned int posY)
{

}



void Card::setAngle(unsigned int angle)
{
    m_angle = angle;
}


void Card::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

	sf::Sprite card;
	card.setTexture(*m_texture);
	card.setOrigin(m_width/2, m_height/2);


	if(m_faceUp)
		card.setTextureRect(sf::IntRect((m_face - 1) * m_width, (m_suit - 1) * m_height, m_width, m_height));
	else
		card.setTextureRect(sf::IntRect(0, (4) * m_height, m_width, m_height));


	card.setPosition(m_position.x, m_position.y);

	card.rotate(m_angle);

	target.draw(card);
}
