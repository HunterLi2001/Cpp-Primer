#include <iostream>
using namespace std;
class Person {
private:
    string strName;
    string strAddress;
public:
    Person() = default;
    Person(const string& name, const string& add)
    {
        strName = name;
        strAddress = add;
    }
	Person(std::istream& is) { is >> strName >> strAddress; }
public:
    std::string getName()const { return strName; }
    std::string getAddress()const { return strAddress; }
};

std::ostream& print(ostream& os, const Person& outPerson)
{
    os << outPerson.getName() << "\t" << outPerson.getAddress() << std::endl;
    return os;
}

int main()
{
    Person p1;
    Person p2(std::cin);
    Person p3("Jessie", "Hunter City");
    print(std::cout, p1);
    print(std::cout, p2);
    print(std::cout, p3);
}