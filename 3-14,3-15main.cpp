#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::vector; using std::string;
int main()
{
	vector<int>Int;
	vector<string>String;
	int i;
	string j;
	while (cin >> i && i >= 0)
	{
		Int.push_back(i);
	}
	while (cin >> j)
	{
		String.push_back(j);
	}
}