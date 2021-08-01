#include <iostream>
#include <string>
using std::cout; using std::endl;
int main()
{
	const char a[6] = "abcde", b[6] = "fghij";
	char c[11];
	strcpy_s(c, a);
	strcat_s(c, b);
	for (auto i = std::begin(c); i != std::end(c); i++)
	{
		cout << *i;
	}
	cout << endl;
}