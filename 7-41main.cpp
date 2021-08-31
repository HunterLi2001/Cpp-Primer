#include <iostream>
#include "Sales_data(7-41).h"

int main()
{
	Sales_data s1;
	cout << "----------" << endl;
	Sales_data s2("978-7-121-15535-2", "001", 128, 100);
	cout << "----------" << endl;
	Sales_data s3(cin);
}
