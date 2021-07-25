#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main()
{
	string in, out1 = "", out2 = "";
	while (cin >> in)
	{
		out1 += in;
		out2 += (in + " ");
	}
	cout << out1 << endl;
	cout << out2 << endl;
}