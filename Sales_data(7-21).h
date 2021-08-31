#include <iostream>
using namespace std;
#ifndef SALES_DATA
#define SALES_DATA
class Sales_data {
private:
	string isbn;
	string bookNo;
	unsigned int unit_sold = 0;
	double revenue = 0;
public:
	Sales_data();
	Sales_data(istream&);
	Sales_data(string, string, unsigned int, double);
	Sales_data combine(const Sales_data& s2);
	istream& read(istream& is);
	Sales_data add(const Sales_data& s1, const Sales_data& s2);
	ostream& print(ostream& os);
};
#endif // SALES_DATA