#include <iostream>
using std::cout; using std::endl;
int main()
{
	int ia[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	using arr = int[4];
	for (arr& a : ia)
	{
		for (int b : a)
		{
			cout << b;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ia[i][j];
		}
		cout << endl;
	}
	cout << endl;
	using arr = int[4];
	for (arr* i = ia; i != ia + 3; i++)
	{
		for (int* j = *i; j != *i + 4; j++)
		{
			cout << *j;
		}
		cout << endl;
	}
}