#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
int main()
{
	int a[5] = { 1,2,3,4,5 }, b[5] = { 1,2,3,4,5 };
	int x = 1;
	for (int i = 0; i != 5; i++)
	{
		if (a[i] != b[i])
		{
			x = 0;
			break;
		}
	}
	if (x == 0)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "���" << endl;
	}
	vector<int> c = { 1,2,3,4,5 };
	vector<int> d = { 1,2,3,4,5 };
	if (c == d)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}