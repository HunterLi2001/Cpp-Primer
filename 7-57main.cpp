#include <iostream>

using namespace std;

class Account {
	string owner;
	double amount;
	static double interestRate;
public:
	void calculate() { amount += amount * interestRate; }

	static double getRate() { return interestRate; }

	static void setRate(double rate) { interestRate = rate; }
};

int main()
{
	return 0;
}
