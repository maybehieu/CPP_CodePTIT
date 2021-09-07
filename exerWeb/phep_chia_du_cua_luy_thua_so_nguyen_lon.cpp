#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long mu(long long a, long long b, long long mod)
{
    if (b == 1)
    {
        return a % mod;
    }
    else if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        long long k = mu(a, b / 2, mod);
        return k % mod * k % mod;
    }
    else
    {
        long long k = mu(a, (b - 1) / 2, mod);
        return (a % mod) * k % mod * k % mod;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        std::string a;
        long long b, m, n = 0;
        cin >> a >> b >> m;
        for (int i = 0; i < a.size(); i++)
        {
            int temp = a[i] - '0';
            n = (n * 10) % m + temp;
            n %= m;
        }
        cout << mu(n, b, m) << endl;
    }

    return 0;
}