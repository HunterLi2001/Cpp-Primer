#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
	string a, b;
	cin >> a >> b;
	if (a == b) 
	{
		cout << "���" << endl;
	}
	else if (a < b)
	{
		cout << b << endl;
	}
	else
	{
		cout << a << endl;
	}
	if (a.size() == b.size())
	{
		cout << "���" << endl;
	}
	else if (a.size() < b.size())
	{
		cout << b << endl;
	}
	else
	{
		cout << a << endl;
	}
}