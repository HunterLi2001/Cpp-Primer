#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout; using std::endl;
int main()
{
	string cinStr, oldStr = "", outStr;
	int count = 1, oldCnt = 0;
	while (cin >> cinStr)
	{
		if (cinStr == oldStr)
		{
			//outStr = cinStr;
			count++;
		}
		else
		{
			if (count > oldCnt)
			{
				outStr = oldStr;
				oldCnt = count;
			}
			count = 1;
		}
		oldStr = cinStr;
	}
	cout << outStr << "\t" << oldCnt << endl;
}