#include <iostream>
#include <ostream>
#include <vector>

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
    : _entries { std::vector<PhoneBookEntry*> {} }
{}

bool PhoneBook::add_entry(PhoneBookEntry entry)
{
    if(entry.get_number().is_valid())
    {
        auto name = entry.get_name();
        for(auto e : _entries)
        {
            if(name == (*e).get_name())
            {
                return false;
            }
        }
        _entries.emplace_back(&entry);
        return true;
    }
    return false;
    
}

const PhoneNumber* PhoneBook::get_number(const std::string name)
{
    for(auto entry : _entries)
    {
        if((*entry).get_name() == name)
        {
            return &(*entry).get_number();
        }
    }
    return nullptr;
}