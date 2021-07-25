//练习1.15
#include <iostream>
//语法错误
/*int main({
	std::cout << "Read each file." << std::endl:
std::cout << Update master. << std::endl;
std::cout << "Write new master."std::endl;
return 0
	}*/


//类型错误
/*int main()
{
	int a = "Hello";//无法从“const char[6]”转换为“int”
}*/

//声明错误
/*int main()
{
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2;//"v":未声明的标识符
	cout << v1 + v2 << std::endl;//cout:未声明的标识符
	return 0;
}*/