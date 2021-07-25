#include <iostream>
struct Foo {}
int main()
{
	return 0;
}
/*发生编译错误：
C2628:"Foo"后面接"int"是非法的(是否忘记了";"?)
C3874:"main"的返回类型应为"int"而非"Foo"
C2440:"return":无法从"int"转换为"Foo"
*/