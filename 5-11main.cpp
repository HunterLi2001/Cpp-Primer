#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
	int aCnt = 0, bCnt = 0;
	char ch;
	while (cin.get(ch))
	{
		switch (ch)
		{
		case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E' :case 'I':case 'O':case 'U':
			aCnt++;
			break;
		case ' ':case '\t':case '\n':
			bCnt++;
			break;
		default:
			break;
		}
	}
	cout << aCnt << "\t" << bCnt << endl;
}