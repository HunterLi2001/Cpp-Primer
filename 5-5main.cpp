#include <iostream>
using std::cout; using std::endl;
int main()
{
	int score = 84;
	char grade;
	if (score < 60)
	{
		grade = 'F';
	}
	else
	{
		if (score < 75)
		{
			grade = 'C';
		}
		else
		{
			if (score < 90)
			{
				grade = 'B';
			}
			else
			{
				if (score > 100)
				{
					cout << "Error!" << endl;
					return 0;
				}
				else
				{
					grade = 'A';
				}
			}
		}
	}
	cout << grade << endl;
	return 0;
}