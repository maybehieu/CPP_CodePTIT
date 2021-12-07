#include <iostream>
#include <algorithm>
const long long MOD = 1e9 + 7;

using std::cin;
using std::cout;
using std::endl;

long long mu(long long a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        long long k = mu(a, b / 2);
        if (b % 2 == 0)
        {
            return k % MOD * k % MOD;
        }
        else
        {
            return a % MOD * k % MOD * k % MOD;
        }
    }
}
void solve(int *arr, int n)
{
    long long h = 1;
    int g = arr[0];
    for (int i = 0; i < n; i++)
    {
        g = std::__gcd(g, arr[i]);
        h *= arr[i];
        h %= MOD;
    }
    cout << mu(h, g) << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}