#ifndef DEALER_HPP
#define DEALER_HPP

#include <vector>
#include "GameComponents/Player.hpp"
#include "GameComponents/Card.hpp"

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

#endif // DEALER_HPP
