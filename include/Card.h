#ifndef CARD_H
#define CARD_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Card : public sf::Drawable
{
    public:

		Card();
        Card(unsigned int face, unsigned int suit, int posX, int posY, sf::Texture* texture);
        virtual ~Card();
        unsigned int face();
        unsigned int suit();
        void show();
        void hide();
		void setPosition(unsigned int posX, unsigned int posY);
		void setAngle(unsigned int angle);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

    private:
        int m_face;
        int m_suit;
        bool m_faceUp;
		sf::Vector2<unsigned int> m_position;
        sf::Texture* m_texture;
		unsigned int m_width;
		unsigned int m_height;
		unsigned int m_angle;


};

#endif // CARD_H
