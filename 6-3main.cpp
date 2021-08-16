#include <iostream>
using std::cout;
using std::endl;
int fact(int x)
{
    int sum = 1;
    for (int i = 1; i <= x; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    int x = 5;
    cout << fact(5) << endl;
}