//练习1.16
#include <iostream>
int main()
{
	int sum = 0, input = 0;
	while (std::cin >> input)//重点在这里，如果std::cin输入无效，则立即退出循环，则实现了不定数目的输入算法
	{
		sum += input;
	}
	std::cout << sum << std::endl;
}
//值得注意的是，在命令行cmd中，输入Ctrl+Z可以输出文件结束符，以^Z表示