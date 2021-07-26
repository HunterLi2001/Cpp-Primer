#include <iostream>
#include <vector>
using std::cin; using std::vector; using std::cout; using std::endl;
int main()
{
	vector<int> ve;
	int i;
	while (cin >> i && i >= 0)
	{
		ve.push_back(i);
	}
	for (unsigned int i = 0; i < ve.size() - 1; i++)
	{
		cout << ve[i] + ve[i + 1] << endl;
	}
	for (unsigned int a = 0, b = ve.size() - 1; a < b; a++, b--)
	{
		cout << ve[a] + ve[b] << endl;
	}
}