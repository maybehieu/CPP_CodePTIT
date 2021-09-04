#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long mod = 1e9 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        long long a = 0, b = 1, c;
        cin >> n;
        if (n == 0 || n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (int i = 2; i <= n; i++)
        {
            c = ((a % mod) + (b % mod)) % mod;
            a = b % mod;
            b = c % mod;
        }
        cout << c << endl;
    }
    return 0;
}