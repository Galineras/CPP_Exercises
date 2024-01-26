#include<string>
#include<algorithm>
#include<random>

#include "Player.hpp"

Player::Player(const std::string& name)
    : _name { name }
    , _cards { std::vector<Card> {} }
    , _score { 0 }
    {}


const std::string Player::getName()
{
    return _name;
}

void Player::addCard(Card c)
{
    _cards.emplace_back(c);
}

void Player::deal_all_cards(Player& p1, Player& p2)
{
    std::vector<std::string> all_colors { "Trèfle", "Pique", "Carreau", "Coeur" };
    std::vector<Card> all_cards {};
    for(short unsigned int val = 7; val < 15; val++)
    {
        for(std::string& col : all_colors)
        {
            all_cards.emplace_back(Card {val, col});
        }
    }
    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

    const unsigned int size = all_cards.size();
    for(unsigned int i = 0; i < size / 2; i++)
    {
        p1.addCard(all_cards[i]);
    }
    for(unsigned int i = size / 2; i < size; i++)
    {
        p2.addCard(all_cards[i]);
    }
}

Card Player::operator[](int i)
{
    return _cards[i];
}