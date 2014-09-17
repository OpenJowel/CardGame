#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
//#include <Image.hpp>
#include "Dealer.h"


class Window
{
	public:
		Window(unsigned int width, unsigned int height);
		virtual ~Window();
		int mainLoop();

	private:
		sf::RenderWindow m_window;
		sf::Texture m_fond;
		sf::Sprite m_background;
		Dealer m_dealer;
		unsigned int m_width;
		unsigned int m_height;


};

#endif // WINDOW_H
