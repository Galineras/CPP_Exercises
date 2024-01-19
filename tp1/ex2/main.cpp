#include <iostream>
#include <vector>

#include "Person.hpp"

int main()
{
    int nb_persons;
    std::cout << "Combien de personnes ? ";
    std::cin >> nb_persons;

    std::vector<Person> persons {};
    std::string fname, sname;
    for (auto i = 0; i < nb_persons; i++)
    {
        std::cin >> fname >> sname;
        persons.emplace_back(Person {fname, sname});
    }
    
    for (auto person : persons)
    {
        std::cout << "La personne s'appelle " << person.getFirstName() << " " << person.getSurname() << std::endl;
    }

    return 0;
}