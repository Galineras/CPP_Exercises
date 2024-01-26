#include <iostream>
#include <string>

#include "Card.hpp"

Card::Card(const unsigned short int value, const std::string& color)
    : _value { value }
    , _color { color }
    {}

const unsigned short int Card::getValue() const
{
    return _value;
}

const std::string Card::getColor() const
{
    return _color;
}

const std::string transfValue(int value)
{
    std::string val;
    switch(value)
    {
        case 11 : val = "Valet"; break;
        case 12 : val = "Dame"; break;
        case 13 : val = "Roi"; break;
        case 14 : val = "As"; break;
        default : val = std::to_string(value);
    };
    return val;
}

void Card::print() const
{
    std::cout << transfValue(getValue()) << " de " << getColor() << std::endl;
}

int Card::operator==(Card c) const
{
    return getValue() == c.getValue();
}

int Card::operator<(Card c) const
{
    return getValue() < c.getValue();
}

std::ostream& operator<<(std::ostream& stream, const Card& c)
{
    stream << transfValue(c.getValue()) << " de " << c.getColor();
    return stream;
}