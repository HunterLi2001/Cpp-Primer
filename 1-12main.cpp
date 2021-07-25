//练习1.12
#include <iostream>
int main()
{
	//以下为书上源码
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum << std::endl;//sum = 0
}