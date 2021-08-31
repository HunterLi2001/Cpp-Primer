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
	Sales_data(string isbn, string bookNo, unsigned int unit_sold, double revenue)
	{
		cout << "ordinary constructor" << endl;
	}

	Sales_data() : Sales_data("undefined", "undefined", 0, 0)
	{
		cout << "default constructor" << endl;
	}

	Sales_data(istream& is) : Sales_data()
	{
		is >> isbn >> bookNo >> unit_sold >> revenue;
		cout << "stream constructor" << endl;
	};
};

#endif // SALES_DATA