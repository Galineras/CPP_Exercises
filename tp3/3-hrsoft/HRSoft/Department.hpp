#pragma once

#include "Employee.hpp"

#include <iostream>
#include <list>
#include <string>

class Department
{
public:
    Department(const std::string& name)
        : _name { name }
    {}

    Employee& add_employee(const std::string& name, unsigned int salary, Employee* manager)
    {
        auto& employee = _employees.emplace_back(name, salary);

        if (manager != nullptr)
        {
            manager->add_subordinate(employee);
        }

        return employee;
    }

    void print_employees()
    {
        for(auto employee : _employees)
        {
            std::cout << employee << std::endl;
        }
    }

    std::string get_name()
    {
        return _name;
    }

    void remove_employee(Employee& employee)
    {
        _employees.remove(employee);
    }

private:
    std::string _name;
    std::list<Employee> _employees;
};
