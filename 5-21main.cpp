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
			if (str[0] < 65 || str[0] > 90)
				continue;
			cout << oldStr << endl;
			x = 1;
			break;
		}
		oldStr = str;
	}
	if (x == 0)
	{
		cout << "没有一个是相同的" << endl;
	}
}