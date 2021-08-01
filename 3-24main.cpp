#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::vector; using std::endl;
int main()
{
	vector<int> ve;
	int i;
	while (cin >> i)
	{
		ve.push_back(i);
	}
	for (auto it = ve.begin(); it != ve.end() - 1; it++)
	{
		cout << (*it) + (*(it + 1)) << endl;
	}
	for (auto it1 = ve.begin(), it2 = ve.end() - 1; it2 - it1 > 0; it1++, it2--)
	{
		cout << (*it1) + (*it2) << endl;
	}
}