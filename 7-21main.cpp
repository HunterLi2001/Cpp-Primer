#include <iostream>
#include "Sales_data(7-21).h"
using namespace std;

Sales_data::Sales_data() :isbn("undefined"), bookNo("undefined") {}
Sales_data::Sales_data(istream& is)
{
	read(is);
}
Sales_data::Sales_data(string Isbn, string BookNo, unsigned int Unit_sold, double Revenue) 
{
	isbn = Isbn;
	bookNo = BookNo;
	unit_sold = Unit_sold;
	revenue = Revenue;
}
Sales_data Sales_data::combine(const Sales_data& s2)
{
	Sales_data s1;
	s1.isbn = s2.isbn;
	s1.bookNo = s2.bookNo;
	s1.unit_sold = s2.unit_sold;
	s1.unit_sold = s2.unit_sold;
	return s1;
}
Sales_data Sales_data::add(const Sales_data& s1, const Sales_data& s2)
{
	Sales_data sum = s1;
	sum.combine(s2);
	return sum;
}
istream& Sales_data::read(istream& is)
{
	double price = 0;
	is >> isbn >> bookNo >> unit_sold >> price;
	revenue = price * unit_sold;
	return is;
}
ostream& Sales_data::print(ostream& os)
{
	os << isbn << "\t" << bookNo << "\t" << unit_sold << "\t" << revenue;
	return os;
}
int main()
{
	Sales_data s1;
	Sales_data s2(cin);
	Sales_data s3("978-7-121-15535-2", "0", 128, 0);
	s1.print(cout) << endl;
	s2.print(cout) << endl;
	s3.print(cout) << endl;
}