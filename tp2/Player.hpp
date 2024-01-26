#include<string>
#include<vector>

#include "Card.hpp"

class Player 
{
private:
    const std::string _name;
    std::vector<Card> _cards;
    unsigned int _score;

public:
    Player(const std::string& name);
    const std::string getName();
    void addCard(Card c);
    static void deal_all_cards(Player& p1, Player& p2);
    Card operator[](int i);
};