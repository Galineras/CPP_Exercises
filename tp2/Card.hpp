#ifndef card

#include<string>
#include<iostream>

class Card 
{
private:
    unsigned short int _value;
    std::string _color;

public:
    Card(const unsigned short int value, const std::string& color);
    const unsigned short int getValue() const;
    const std::string getColor() const;
    void print() const;
    int operator==(Card c) const;
    int operator<(Card c) const;
};

std::ostream& operator<<(std::ostream& stream, const Card& c);


#define card
#endif