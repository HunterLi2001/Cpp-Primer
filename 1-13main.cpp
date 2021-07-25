//Á·Ï°1.13
#include <iostream>
int main()
{
	//1.9
	int sum = 0;
	for (int i = 50; i <= 100; i++)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
	//1.10
	for (int i = 10; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
	//1.11
	int a, b;
	std::cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		std::cout << i << std::endl;
	}
}