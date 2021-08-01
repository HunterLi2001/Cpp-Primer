#include <iostream>
#include <vector>
using std::cout; using std::vector; using std::endl;
int main()
{
	vector<int> ve{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto it = ve.begin(); it != ve.end(); it++)
	{
		(*it) *= 2;
	}
	for (auto it2 = ve.begin(); it2 != ve.end(); it2++)
	{
		cout << *it2 << endl;
	}
}