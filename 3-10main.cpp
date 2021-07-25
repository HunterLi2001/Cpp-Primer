#include <iostream>
#include <string>
#include <cctype>
using std::cout; using std::endl; using std::string;
int main()
{
	string str = "He%l&^*lo%Wo^rl&*()d";
	for (auto& c : str)
	{
		if (ispunct(c))
		{
			c = ' ';
		}
	}
	cout << str << endl;
}