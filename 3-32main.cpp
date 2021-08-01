#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	int arr2[10];
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "arr2[" << i << "] = " << arr[i] << endl;
	}
	vector<int>arr3(10);
	for (int i = 0; i < 10; i++)
	{
		arr3.push_back(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "arr3[" << i << "] = " << arr[i] << endl;
	}
	vector<int>arr4 = arr3;
	for (int i = 0; i < 10; i++)
	{
		cout << "arr4[" << i << "] = " << arr[i] << endl;
	}
}