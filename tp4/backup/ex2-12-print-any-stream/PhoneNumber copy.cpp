
#include <iostream>
#include <ostream>
#include <array>

#include "PhoneNumber.hpp"

PhoneNumber::PhoneNumber(int i1, int i2, int i3, int i4, int i5)
    : _number { std::array<int, 5> {i1, i2, i3, i4, i5} }
{}

bool PhoneNumber::is_valid() const
{
    for(auto i : _number)
    {
        if(i > 99 || i < 0)
        {
            return false;
        }
    }
    return true;
}

int PhoneNumber::operator[](const int i) const
{
    if(i < 0 || i > 4)
    {
        return -1;
    }
    return _number.at(i);
}

std::ostream& operator<<(std::ostream& stream, PhoneNumber phone)
{
    for(auto num : phone._number)
    {
        if(num < 10)
        {
            stream << "0";
        }
        stream << num;
    }
    return stream;
}