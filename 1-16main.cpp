//��ϰ1.16
#include <iostream>
int main()
{
	int sum = 0, input = 0;
	while (std::cin >> input)//�ص���������std::cin������Ч���������˳�ѭ������ʵ���˲�����Ŀ�������㷨
	{
		sum += input;
	}
	std::cout << sum << std::endl;
}
//ֵ��ע����ǣ���������cmd�У�����Ctrl+Z��������ļ�����������^Z��ʾ