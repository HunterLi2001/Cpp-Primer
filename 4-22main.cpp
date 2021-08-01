//练习4.22
#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::cout; using std::endl; using std::string;
int main()
{
	int i = 80;
	if (i > 90)
		cout << "high pass" << endl;
	if (i <= 90 && i > 75)
		cout << "pass" << endl;
	if (i <= 75 && i >= 60)
		cout << "low pass" << endl;
	if (i <= 60)
		cout << "fail" << endl;
	//
	string grade = i > 90 ? "high pass" : (i > 75 && i <= 90 ? "pass" : (i <= 75 && i >= 60 ? "low pass" : "fail"));
	cout << grade << endl;
}
//事实上，第一种可读性更高，更容易理解，但第二种代码更简洁