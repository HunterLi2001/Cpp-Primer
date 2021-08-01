#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;
int main()
{
	string a = "abcde", b = "abcde";
	const char c[6] = "abcde", d[6] = "abcde";
	if (a == b)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	if (strcmp(c, d) == 0)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
}