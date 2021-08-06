#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;
int main()
{
	vector<int> ve1 = { 0,1,1,2 };
	vector<int> ve2 = { 0,1,1,2,3,5,8 };
	vector<int>::iterator it1 = ve1.begin(), it2 = ve2.begin();
	while(it1 != ve1.end() && it2 != ve2.end())
	{
		if (*it1 != *it2)
		{
			std::cout << "不存在前缀关系" << std::endl;
			return 0;
		}
		it1++, it2++;
	}
	if (ve1.size() <= ve2.size())
	{
		cout << "ve1是ve2的前缀" << endl;
	}
	else
	{
		cout << "ve2是ve1的前缀" << endl;
	}
}