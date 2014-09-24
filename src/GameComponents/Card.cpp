#include "GameComponents/Card.hpp"

Card::Card(Suit suit, Value value) : m_suit(suit), m_value(value)
{}


Card::Suit Card::getSuit()
{
    return m_suit;
}


Card::Value Card::getValue()
{
    return m_value;
}


bool operator<(Card& c1, Card& c2)
{
    return c1.getValue() < c2.getValue();
}


bool operator>(Card& c1, Card& c2)
{
    return c1.getValue() > c2.getValue();
}

bool operator==(Card& c1, Card& c2)
{
    return c1.getValue() == c2.getValue();
}
