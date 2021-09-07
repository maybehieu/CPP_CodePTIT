#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long mod(long long a, long long b, long long c)
{
    if (b == 1)
    {
        return a % c;
    }
    if (b == 0)
    {
        return 0;
    }
    if (b % 2 == 0)
    {
        return 2 * mod(a, b / 2, c) % c;
    }
    else
    {
        return (a % c + 2 * mod(a, (b - 1) / 2, c)) % c;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << mod(a, b, c) << endl;
    }

    return 0;
}