#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;
int main()
{
	string a = "abcde", b = "abcde";
	const char c[6] = "abcde", d[6] = "abcde";
	if (a == b)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	if (strcmp(c, d) == 0)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}