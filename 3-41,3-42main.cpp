#include <iostream>
#include <vector>
using std::vector;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	vector<int> vec(std::begin(arr), std::end(arr));
	vector<int> vec2 = { 6,7,8,9,10 };
	int arr2[5];
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = vec2[i];
	}
}