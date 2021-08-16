#include <iostream>
using Int = int*;
void swap(Int& a, Int& b)
{
	int* temp = b;
	b = a;
	a = temp;
}
int main()
{
	int a = 1, b = 2;
	int* p1 = &a, * p2 = &b;
	std::cout << p1 << "\t" << p2 << std::endl;
	swap(p1, p2);
	std::cout << p1 << "\t" << p2 << std::endl;
}