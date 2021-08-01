#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::vector; using std::string; using std::cout; using std::endl;
int main()
{
	vector<int> v1;
	cout << v1.size() << endl;
	vector<int>::iterator it;
	for (it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	vector<int> v2(10);
	cout << v2.size() << endl;
	for (it=v2.begin();it!=v2.end();it++)
	{
		cout << *it << endl;
	}
	vector<int> v3(10, 42);
	cout << v3.size() << endl;
	for (it = v3.begin(); it != v3.end(); it++)
	{
		cout << *it << endl;
	}
	vector<int> v4{ 10 };
	cout << v4.size() << endl;
	for (it = v4.begin(); it != v4.end(); it++)
	{
		cout << *it << endl;
	}
	vector<int> v5{ 10,42 };
	cout << v5.size() << endl;
	for (it = v5.begin(); it != v5.end(); it++)
	{
		cout << *it << endl;
	}
	vector<string> v6{ 10 };
	vector<string>::iterator is;
	cout << v6.size() << endl;
	for (is = v6.begin(); is != v6.end(); is++)
	{
		cout << *is << endl;
	}
	vector<string> v7{ 10,"hi" };
	cout << v7.size() << endl;
	for (is = v7.begin(); is != v7.end(); is++)
	{
		cout << *is << endl;
	}
}