//练习5.3
#include <iostream>
int main()
{
	int sum = 10, val = 1;
	while (val <= 10)
		sum += val, ++val;
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
//事实上，可读性降低了。