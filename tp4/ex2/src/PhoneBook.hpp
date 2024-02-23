#pragma once

#include <iostream>
#include <ostream>
#include <vector>

#include "PhoneBookEntry.hpp"

class PhoneBook
{
public:
    PhoneBook();
    bool add_entry(PhoneBookEntry entry);
    const PhoneNumber* get_number(const std::string name);

private:
    std::vector<PhoneBookEntry*> _entries;
};