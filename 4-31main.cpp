//��ϰ4.31
#include <iostream>
#include <vector>
using namespace std;
//ֱ�Ӷ�ix��cnt���������Լ���������ʵ��������ǰ�û��Ǻ��ã��Խ����û��ʲôӰ��
int main()
{
	vector<int>ivec;
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
}