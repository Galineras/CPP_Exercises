#include <iostream>

#include "Person.hpp"

int main()
{
    Person person = { "Palluche", "La Faluche" };
    std::cout << "La personne s'appelle " << person.first_name << " " << person.surname << std::endl;

    return 0;
}