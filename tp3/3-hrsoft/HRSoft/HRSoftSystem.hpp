#pragma once

#include "Department.hpp"

#include <list>
#include <string>

class HRSoftSystem
{
public:
    Department& add_department(const std::string& name)
    {
        return _departments.emplace_back(name);
    }

    void print_all_departments()
    {
        for(auto department : _departments)
        {
            std::cout << department.get_name() << std::endl;
        }
    }

    void print_all_employees()
    {
        for(auto department : _departments)
        {
            department.print_employees();
        }
    }

    void remove_employee(Employee& employee)
    {
        for(auto dpt : _departments)
        {
            dpt.remove_employee(employee);
        }
    }

private:
    std::list<Department> _departments;
};
