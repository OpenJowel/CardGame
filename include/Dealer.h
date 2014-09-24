#ifndef DEALER_H
#define DEALER_H

#include <vector>
#include "Player.h"
#include "Card.h"

struct GameComponents;

class Dealer
{
    public:

        Dealer(GameComponents& gameComponents);
        virtual ~Dealer();

        void setTable();
        void dealStartingCards();
		void dealTo(Player* player);

    private:

        GameComponents& m_gameComponents;
};

#endif // DEALER_H
