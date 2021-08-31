#include <iostream>

using namespace std;

class Date {
	int year, month, day;
public:
	Date() : year(2000), month(1), day(1) {}

	Date(int Year, int Month, int Day) : Date()
	{
		year = Year;
		month = Month;
		day = Day;
	}//提供默认构造函数的功能，同时提供普通构造函数
	Date(istream& is) : Date() { is >> year >> month >> day; }//输入的构造函数
	ostream& print(ostream& os = cout) const
	{
		os << year << "-" << month << "-" << day;
		return os;
	}
};

int main()
{
	Date date1;
	Date date2(2001, 6, 28);
	Date date3(cin);
	date1.print() << endl;
	date2.print() << endl;
	date3.print() << endl;
}