#include <iostream>
using namespace std;
void print1(const int* x)
{
	cout << *x << endl;
}
void print2(const int* a,const int* b)
{
	for (auto p = a; p != b; p++)
	{
		cout << *p << endl;
	}
}
void print3(const int* arr,size_t size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int i = 0, j[2] = { 0,1 };
	print1(&i);
	auto p1 = begin(j);
	auto p2 = end(j);
	print2(p1,p2);
	print3(j, end(j)-begin(j));
}