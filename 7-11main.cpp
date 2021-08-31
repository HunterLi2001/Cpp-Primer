#include <iostream>
#include "Sales_data(7-11).h"
using namespace std;
istream& read(istream& is, Sales_data& s);
Sales_data::Sales_data() :isbn("undefined"), bookNo("undefined") {}
Sales_data::Sales_data(istream& is)
{
	read(cin, *this);
}
Sales_data::Sales_data(string Isbn, string BookNo, unsigned int Unit_sold, double Revenue)
{
	isbn = Isbn;
	bookNo = BookNo;
	unit_sold = Unit_sold;
	revenue = Revenue;
}
Sales_data Sales_data::  combine(const Sales_data& s2)
{
	Sales_data s1;
	s1.isbn = s2.isbn;
	s1.bookNo = s2.bookNo;
	s1.unit_sold = s2.unit_sold;
	s1.unit_sold = s2.unit_sold;
	return s1;
}
Sales_data Sales_data:: add(const Sales_data& s1, const Sales_data& s2)
{
	Sales_data sum = s1;
	sum.combine(s2);
	return sum;
}
istream& read(istream& is, Sales_data& s)
{
	double price = 0;
	is >> s.isbn >> s.bookNo >> s.unit_sold >> price;
	s.revenue = price * s.unit_sold;
	return is;
}
ostream& print(ostream& os, const Sales_data& s)
{
	os << s.isbn << " " << s.bookNo << " " << s.unit_sold << " " << s.revenue << endl;
	return os;
}

int main()
{
	Sales_data s1;
	Sales_data s2(cin);
	Sales_data s3("978-7-121-15535-2", "0", 128, 0);
	print(cout, s1);
	print(cout, s2);
	print(cout, s3);
}