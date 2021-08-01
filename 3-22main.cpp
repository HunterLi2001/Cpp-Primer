#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::string; using std::vector; using std::endl;
int main()
{
	vector<string> str;
	string s;
	while (getline(cin, s))
	{
		str.push_back(s);
	}
	for (auto it = str.begin(); it != str.end() && !it->empty(); it++)
	{
		for (auto it2 = it->begin(); it2 != it->end(); it2++)
		{
			*it2 = toupper(*it2);
		}
		cout << *it << endl;
	}
}