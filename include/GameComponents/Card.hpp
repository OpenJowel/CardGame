#ifndef CARD_HPP
#define CARD_HPP

class Card
{
    public:

        enum Suit {HEARTS, DIAMONDS, SPADES, CLUBS};
        enum Value {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 11, QUEEN = 12, KING = 13, ACE = 14};

        Card(Suit suit, Value value);

        Suit getSuit();
        Value getValue();

    private:

        Suit m_suit;
        Value m_value;
};

bool operator<(Card const& c1, Card const& c2);
bool operator>(Card const& c1, Card const& c2);
bool operator==(Card const& c1, Card const& c2);

#endif // CARD_HPP
