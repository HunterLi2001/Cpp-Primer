#include <iostream>
/*
�Ʋ⣺int;const int&;int*
const int,const int&
*/
int main()
{
	const int i = 42;
	auto j = i;
	const auto& k = i;
	auto* p = &i;
	const auto j2 = i, & k2 = i;
}
/*
���ۣ�int;const int&;int*
const int,const int&
*/