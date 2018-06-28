#ifndef CP5_ex7_05_2_h
#define CP5_ex7_05_2_h

#include <string>

class Person
{
  private:
    std::string name;
    std::string address;

  public:
    Person() = default;
    Person(const std::string &name0, const std::string &addr)
    {
        name = name0;
        address = addr;
    }

  public:
    std::string getName() const
    {
        return name;
    }
    //const& 返回值性能更好
    std::string const &getAddress() const { return address; }
};

// std::istream &read(std::istream &is, Person &person)
// {
//     return is >> person.name >> person.address;
// }

// std::ostream &print(std::ostream &os, const Person &person)
// {
//     return os << person.name << " " << person.address;
// }

#endif
