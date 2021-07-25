#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main()
{
	string str1 = "const char", str2 = str1;
	unsigned int i = 0;
	while(i < str1.size())
	{
		str1[i] = 'X';
		i++;
	}
	cout << str1 << endl;
	for (unsigned int j = 0; j < str2.size(); j++)
	{
		str2[j] = 'X';
	}
	cout << str2 << endl;
}
//事实上，范围for相比于普通for代码更简洁，但普通for可读性更好。