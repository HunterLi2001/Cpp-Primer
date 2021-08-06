#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0) throw 0;
			cout << a / b << endl;

		}
		catch (int err)
		{
			cout << "runtime error: " << err << endl;
			cout << "Do you want to try angin?";
			char choose;
			cin >> choose;
			if (choose != 'y' && choose != 'Y')
			{
				break;
			}
		}
	}
}
//练习5.24
//没有输出结果，并输出返回值为-1073741676