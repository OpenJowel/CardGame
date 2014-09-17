#include "Dealer.h"

using namespace std;

Dealer::Dealer()
{
    //ctor
}


Dealer::Dealer(sf::RenderWindow* window)
{
	m_window = window;
}


Dealer::~Dealer()
{
    //dtor
}


/* Starts a new game and define the quantity of players */
/* Maximum of 5 */
void Dealer::newGame(unsigned int playerQuantity)
{
	//sf::Texture texture;

	if(!m_cardsTheme.loadFromFile("gfx/CardsTileSet-79x123.png", sf::IntRect(0, 0, 1027, 615)))
		cout << "Error while loading card's tileset" << endl;

	sf::Vector2<unsigned int> windowSize = m_window->getSize();

	m_cardsTheme.setSmooth(true);

	unsigned int angle = 0;

	for(unsigned int i = 0; i < playerQuantity; i++)
	{
		m_players.emplace_back(Player(angle));
		angle += (360 / playerQuantity);
	}

	unsigned int face;

    for(unsigned int suit = 1; suit <= 4; suit++)
	{
	    for(face = 1; face <= 13; face++)
		{
			m_dealingStack.emplace_back(Card(face, suit, windowSize.x/2, windowSize.y/2, &m_cardsTheme));
		}

	}
}

/* A simple random-swapping positions function */
void Dealer::shuffle()
{
	srand(time(NULL));

    for(unsigned int i = 0; i < m_dealingStack.size() -1; i++)
	{
		unsigned int destinationSwap = rand() % (m_dealingStack.size() - 1);

		Card tmp = m_dealingStack[i];
		m_dealingStack[i] = m_dealingStack[destinationSwap];
		m_dealingStack[destinationSwap] = tmp;
	}
}


/* Deals cards one by one to each player */
void Dealer::deal()
{
	for(unsigned int i = 0; i < 9; i++)
	{
		for(unsigned int j = 0; j < m_players.size(); j++)
		{
			m_players[j].receiveCardFromDealer(m_dealingStack.back());
			m_dealingStack.pop_back();
		}
	}

	//cout << m_dealingStack.size() << endl;
}


void Dealer::displayPlayers()
{
	for(vector<Player>::iterator vectorIt = m_players.begin(); vectorIt != m_players.end(); ++vectorIt)
	{
		list<Card> handCards = vectorIt->handCards();
		list<Card> faceUpCards = vectorIt->faceUpCards();
		list<Card> faceDownCards = vectorIt->faceDownCards();


		for(list<Card>::iterator it = handCards.begin(); it != handCards.end(); ++it)
		{
			m_window->draw(*it);
			//cout << it->face() << endl;
		}

		for(list<Card>::iterator it = faceDownCards.begin(); it != faceDownCards.end(); ++it)
		{
			m_window->draw(*it);
			//cout << it->face() << endl;
		}

		for(list<Card>::iterator it = faceUpCards.begin(); it != faceUpCards.end(); ++it)
		{
			m_window->draw(*it);
			//cout << it->face() << endl;
		}
	}
}


/* Debugging method */
void Dealer::printDeque()
{
	cout << "Here are the cards :" << endl;

	for(deque<Card>::iterator it = m_dealingStack.begin(); it != m_dealingStack.end(); ++it)
	cout << it->face() << endl;

	cout << "There are " << m_dealingStack.size() << " cards" << endl;
}

