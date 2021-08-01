//Á·Ï°4.21
#include <iostream>
#include <vector>
using std::vector;
int main()
{
	vector<int> ve = { 89,562,51,416,465 };
	for (int i = 0; i < 5; i++)
	{
		ve[i] % 2 == 1 ? ve[i] *= 2 : ve[i];
	}
}