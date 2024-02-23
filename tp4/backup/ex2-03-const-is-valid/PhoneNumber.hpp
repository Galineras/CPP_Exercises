#pragma once

#include <iostream>
#include <ostream>
#include <array>

class PhoneNumber
{
public:
    PhoneNumber(int i1, int i2, int i3, int i4, int i5);

    bool is_valid() const;

    int operator[](const int i) const;

    friend std::ostream& operator<<(std::ostream& stream, PhoneNumber phone);


private:
    std::array<int, 5> _number;
};

std::ostream& operator<<(std::ostream& stream, PhoneNumber phone);