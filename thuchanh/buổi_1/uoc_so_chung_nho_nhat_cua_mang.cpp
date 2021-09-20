#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long solve(int n)
{
    long long res = 1;

    for (int i = 2; i <= n; i++)
    {
        res = ((i * res) / gcd(res, i));
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}