#include <iostream>
int compare(int x, int* p)
{
	return x > (*p) ? x : (*p);
}
int main()
{
	int x = 10;
	std::cout << compare(11, &x) << std::endl;
}