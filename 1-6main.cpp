//练习1.6
#include <iostream>
int main()
{
	int v1 = 2, v2 = 3;
	/*//原代码如下：
	std::cout << "The sum of " << v1;
	<< " and " << v2;
	<< " is " << v1 + v2 << std::endl;
	//出现编译错误C2059:语法错误："<<"，原因在于<<运算符前没有指向的对象，语句在;处就结束了，下一排的语句属于独立的语句，属于语法错误。
	下面展示正确代码：
	*/
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	//输出为The sum of 2 and 3 is 5
}
