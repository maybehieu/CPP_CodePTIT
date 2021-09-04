#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long pow(long long a, long long b, long long c)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        long long temp = pow(a, b / 2, c);
        return (b % 2 == 0) ? temp % c * temp % c : temp % c * temp % c * a % c;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long x, y, p;
        cin >> x >> y >> p;
        cout << pow(x, y, p) << endl;
    }

    return 0;
}