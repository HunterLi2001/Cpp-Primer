//练习4.31
#include <iostream>
#include <vector>
using namespace std;
//直接对ix和cnt进行自增自减操作，事实上无论是前置还是后置，对结果都没有什么影响
int main()
{
	vector<int>ivec;
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
}