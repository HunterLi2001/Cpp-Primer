#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::vector; using std::string; using std::cout; using std::endl;
int main()
{
	vector<int> v1;
	cout << v1.size() << endl;
	for (int i = 0; i != v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
	vector<int> v2(10);
	cout << v2.size() << endl;
	for (int i = 0; i != v2.size(); i++)
	{
		cout << v2[i] << endl;
	}
	vector<int> v3(10, 42);
	cout << v3.size() << endl;
	for (int i = 0; i != v3.size(); i++)
	{
		cout << v3[i] << endl;
	}
	vector<int> v4{ 10 };
	cout << v4.size() << endl;
	for (int i = 0; i != v4.size(); i++)
	{
		cout << v4[i] << endl;
	}
	vector<int> v5{ 10,42 };
	cout << v5.size() << endl;
	for (int i = 0; i != v5.size(); i++)
	{
		cout << v5[i] << endl;
	}
	vector<string> v6{ 10 };
	cout << v6.size() << endl;
	for (int i = 0; i != v6.size(); i++)
	{
		cout << v6[i] << endl;
	}
	vector<string> v7{ 10,"hi" };
	cout << v7.size() << endl;
	for (int i = 0; i != v7.size(); i++)
	{
		cout << v7[i] << endl;
	}
}