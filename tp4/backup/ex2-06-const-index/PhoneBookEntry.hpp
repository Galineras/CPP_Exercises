#pragma once

#include <iostream>
#include <string>

#include "PhoneNumber.hpp"

class PhoneBookEntry
{
public:
    PhoneBookEntry(const std::string name, PhoneNumber phone);
    const std::string& get_name() const;
    const PhoneNumber& get_number() const;
    bool operator==(PhoneBookEntry other) const;

private:
    const std::string _name;
    const PhoneNumber _phone;
};