#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
	int x = 0;
	string str, oldStr = "";
	while (cin >> str)
	{
		if (oldStr == str)
		{
			cout << oldStr << endl;
			x = 1;
			break;
		}
		oldStr = str;
	}
	if (x == 0)
	{
		cout << "û��һ������ͬ��" << endl;
	}
}