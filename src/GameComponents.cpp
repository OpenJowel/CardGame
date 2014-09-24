#include "GameComponents.hpp"


GameComponents::GameComponents()
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = Card::Value::TWO; j <= Card::Value::ACE; j++)
        {
            m_cards.emplace_back((Card::Suit)i, (Card::Value)j);
        }
    }
}


GameComponents::~GameComponents()
{
}
