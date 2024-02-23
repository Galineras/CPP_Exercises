#pragma once

#include <list>
#include <iostream>
#include <ostream>
#include <string>

class Employee
{
public:
    Employee(const std::string& name, unsigned int salary)
        : _name { name }, _salary { salary }
    {}

    void add_subordinate(Employee& subordinate)
    {
        // TODO - Q3
        _subordinates.emplace_back(&subordinate);
    }

    friend std::ostream& operator<<(std::ostream&, const Employee&);

    void print_subordinates()
    {
        for(auto sub : _subordinates)
        {
            std::cout << *sub << std::endl;
        }
    }

    bool operator==(Employee other)
    {
        return other._name == _name && other._salary == _salary;
    }

private:
    std::string _name;
    unsigned int _salary = 0;
    std::list<Employee*> _subordinates;
};

inline std::ostream& operator<<(std::ostream& stream, const Employee& employee)
{
    const auto is_manager = !employee._subordinates.empty();
    return stream << employee._name
                  << " (salary: " << employee._salary
                  << "| manager: " << (is_manager ? "yes" : "no")
                  << ")";
}
