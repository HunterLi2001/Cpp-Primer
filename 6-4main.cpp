#include <iostream>
using std::cin;
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
    int x;
    cin >> x;
    cout << fact(x) << endl;
}