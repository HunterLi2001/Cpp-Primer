#include <iostream>
struct Foo {}
int main()
{
	return 0;
}
/*�����������
C2628:"Foo"�����"int"�ǷǷ���(�Ƿ�������";"?)
C3874:"main"�ķ�������ӦΪ"int"����"Foo"
C2440:"return":�޷���"int"ת��Ϊ"Foo"
*/