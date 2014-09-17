#include "Window.h"

using namespace std;

Window::Window(unsigned int width, unsigned int height) :	m_window(sf::VideoMode(1024, 768), "HUD"),
															m_width(width),
															m_height(height)
{
	m_window.setFramerateLimit(30);

	m_dealer = Dealer(&m_window);


    m_fond.loadFromFile("gfx/Background.png", sf::IntRect(0, 0, 256, 256));
    m_fond.setRepeated(true);
    m_background = sf::Sprite(m_fond, sf::IntRect(0, 0, m_width, m_height));
}

Window::~Window()
{
	//dtor
}


int Window::mainLoop()
{
	m_dealer.newGame(3);
	m_dealer.shuffle();
	m_dealer.deal();

    while (m_window.isOpen())
    {
        sf::Event event;
        while (m_window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    m_window.close();
                    break;

                default:
                    break;
            }
        }

        //Reset
        m_window.clear(sf::Color(0, 0, 0));

        /* Draw things here */
		m_window.draw(m_background);
		m_dealer.displayPlayers();


        //Display
        m_window.display();

    }

	return 0;
}
