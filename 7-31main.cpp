#include <iostream>
using namespace std;
class Y;
class X {
public:
	Y* y = nullptr;
};
class Y {
	X x;
};
int main()
{
	return 0;
}