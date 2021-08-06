#include <iostream>
using std::cout; using std::endl;
int main()
{
	int score = 84;
	char grade = score < 60 ? 'F' : (score < 75 ? 'C' : (score < 90 ? 'B' : 'A'));
	cout << grade << endl;
}