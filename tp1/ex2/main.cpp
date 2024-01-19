#include <iostream>

#include "Person.hpp"

int main()
{
    Person person {"Palluche", "La Faluche"};
    std::cout << "La personne s'appelle " << person.getFirstName() << " " << person.getSurname() << std::endl;

    return 0;
}