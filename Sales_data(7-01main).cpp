#include <iostream>
using namespace std;
struct Sales_data{
	string isbn;
	string bookNo;
	unsigned int unit_sold = 0;
	double revenue = 0;
	Sales_data combine(Sales_data& s1, const Sales_data& s2);
	Sales_data read(istream& is, Sales_data& s);
	Sales_data add(const Sales_data& s1, const Sales_data& s2);
	ostream& print(ostream& os, const Sales_data& s);
};
int main()
{
	return 0;
}