#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::string; using std::vector; using std::endl;
int main()
{
	vector<string>str;
	string s;
	while (cin >> s)
	{
		str.push_back(s);
	}
	for (int i = 0; i < str.size(); i++)
	{
		for (auto& x : str[i])
		{
			x = toupper(x);
		}
	}
	for (auto x : str)
	{
		cout << x << endl;
	}
}