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
			std::cout << "������ǰ׺��ϵ" << std::endl;
			return 0;
		}
		it1++, it2++;
	}
	if (ve1.size() <= ve2.size())
	{
		cout << "ve1��ve2��ǰ׺" << endl;
	}
	else
	{
		cout << "ve2��ve1��ǰ׺" << endl;
	}
}