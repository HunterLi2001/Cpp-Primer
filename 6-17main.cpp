#include <iostream>
#include <string>
using std::string;
bool isBig(const string& str)
{
	for (int i = 0; i != str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return true;
	}
	return false;
}
void turnSmall(string& str)
{
	for (int i = 0; i != str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}
int main()
{
	string str = "cOnsT ChaR*";
	std::cout << isBig(str) << std::endl;
	turnSmall(str);
	std::cout << str << std::endl;
}
//这两个函数使用的形参类型是不完全相同的，因为为了减少字符串的拷贝，使用类类型（包括标准库类型）的变量应该使用相应的拷贝，但函数1中字符串类型是不会更改的，所以使用了const。