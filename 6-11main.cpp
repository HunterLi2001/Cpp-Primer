#include <iostream>
using std::cout; using std::endl;

void reset(int& x)
{
	x = 0;
}

int main()
{
	int x = 1;
	reset(x);
	cout << x << endl;
}