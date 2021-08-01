#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::vector; using std::endl;
int main()
{
	vector<unsigned int>grade(11, 0);
	unsigned int i;
	vector<unsigned int>::iterator it = grade.begin();
	while (cin >> i)
	{
		if (i <= 100)
		{
			(*(it + (i / 10)))++;
		}
	}
	for (auto it2 = grade.begin(); it2 != grade.end(); it2++)
	{
		cout << *it2 << endl;
	}
}