//练习1.17
#include <iostream>
int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}

		}			
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
/*
这里我输入了1 1 1 1 1 1 1 1 1 1 1 共11个1
输出结果为：
	1 occurs 11 times
又输入了1 2 3 4 5
输出结果为：
	1 occurs 1 times
	2 occurs 1 times
	3 occurs 1 times
	4 occurs 1 times
	5 occurs 1 times
*/