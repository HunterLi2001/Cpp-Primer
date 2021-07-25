#include <iostream>
int main()
{
	int a = 1, b = 5, * p = &a;
	p = &b;
	*p = 10;
}