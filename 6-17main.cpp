#include <iostream>
#include <string>
using std::string;
bool isBig(const string& str)
{
	for (int i = 0; i != str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return true;
	}
	return false;
}
void turnSmall(string& str)
{
	for (int i = 0; i != str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}
int main()
{
	string str = "cOnsT ChaR*";
	std::cout << isBig(str) << std::endl;
	turnSmall(str);
	std::cout << str << std::endl;
}
//����������ʹ�õ��β������ǲ���ȫ��ͬ�ģ���ΪΪ�˼����ַ����Ŀ�����ʹ�������ͣ�������׼�����ͣ��ı���Ӧ��ʹ����Ӧ�Ŀ�����������1���ַ��������ǲ�����ĵģ�����ʹ����const��