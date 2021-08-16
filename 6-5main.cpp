#include <iostream>
using std::cout; using std::endl;
int Abs(int x)
{
	if (x >= 0)
		return x;
	else
		return -x;
}
int main()
{
	int x = -7;
	cout << Abs(x) << endl;
}