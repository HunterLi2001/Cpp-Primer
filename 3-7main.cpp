#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main()
{
	string str = "const char";
	for (char& c : str)
	{
		c = 'X';
	}
	cout << str << endl;
}
//ò��û��ʲô�仯...