//��ϰ1.6
#include <iostream>
int main()
{
	int v1 = 2, v2 = 3;
	/*//ԭ�������£�
	std::cout << "The sum of " << v1;
	<< " and " << v2;
	<< " is " << v1 + v2 << std::endl;
	//���ֱ������C2059:�﷨����"<<"��ԭ������<<�����ǰû��ָ��Ķ��������;���ͽ����ˣ���һ�ŵ�������ڶ�������䣬�����﷨����
	����չʾ��ȷ���룺
	*/
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	//���ΪThe sum of 2 and 3 is 5
}
