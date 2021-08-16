#include <iostream>
using std::cout; using std::endl;

void swap(int* a, int* b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}

int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << a << "\t" << b << endl;
}