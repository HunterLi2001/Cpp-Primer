//练习1.8
#include <iostream>
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout <</*"*/"*/;
	//这个语句不合法
	std::cout <</*"*/"/*"/*"*/;
}