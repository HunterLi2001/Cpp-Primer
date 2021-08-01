#include <iostream>
#include <iterator>
int main()
{
	int arr[5];
	for (auto it = std::begin(arr); it != std::end(arr); it++)
	{
		*it = 0;
	}
}