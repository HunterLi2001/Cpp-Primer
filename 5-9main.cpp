#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
	int count = 0;
	char in;
	while (cin >> in)
	{
		if (in == 'a')
			count++;
		if (in == 'e')
			count++;
		if (in == 'i')
			count++;
		if (in == 'o')
			count++;
		if (in == 'u')
			count++;
	}
	cout << count << endl;
}