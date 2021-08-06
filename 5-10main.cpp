#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
	int count = 0;
	char in;
	while (cin >> in)
	{
		if (in == 'a' || in == 'A')
			count++;
		if (in == 'e' || in == 'E')
			count++;
		if (in == 'i' || in == 'I')
			count++;
		if (in == 'o' || in == 'O')
			count++;
		if (in == 'u' || in == 'U')
			count++;
	}
	cout << count << endl;
}