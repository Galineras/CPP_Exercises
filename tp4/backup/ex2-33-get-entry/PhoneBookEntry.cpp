#include <iostream>
#include <string>

#include "PhoneBookEntry.hpp"

PhoneBookEntry::PhoneBookEntry(const std::string name, PhoneNumber phone)
    : _name { name }
    , _phone { phone }
{}

const std::string& PhoneBookEntry::get_name() const
{
    return _name;
}

const PhoneNumber& PhoneBookEntry::get_number() const
{
    return _phone;
}

bool PhoneBookEntry::operator==(PhoneBookEntry other) const
{
    return _name == other.get_name();
}
