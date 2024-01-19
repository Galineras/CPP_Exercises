#include <string>

struct Person
{
private:
    std::string _first_name;
    std::string _surname;
public:
    Person(const std::string fname, const std::string sname)
    : _first_name { fname }
    , _surname { sname }
    {}
    
    std::string getFirstName();
    std::string getSurname();
};