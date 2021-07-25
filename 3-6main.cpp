#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main()
{
	string str = "const char";
	for (auto& c : str)
	{
		c = 'X';
	}
	cout << str << endl;
}