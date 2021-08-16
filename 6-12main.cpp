#include <iostream>
using std::cout; using std::endl;
void swap(int& x, int& y)
{
	int temp = y;
	y = x;
	x = temp;
}

int main()
{
	int a = 1, b = 2;
	swap(a, b);
	cout << a << "\t" << b << endl;
}