#include <iostream>
const long long MOD = 1e9 + 7;

using std::cin;
using std::cout;
using std::endl;
long long mu(int a, int b)
{
    long long s = 1;
    for (int i = 0; i < b; i++)
    {
        s *= a;
        s %= MOD;
    }
    return s;
}
void tu(int n, int *arr, int &max)
{
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            arr[i]++;
            n /= i;
            if (max < i)
            {
                max = i;
            }
        }
        if (i == 2)
        {
            i++;
        }
        else
        {
            i += 2;
        }
    }
}
void mau(int n, int *arr, int &max)
{
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            arr[i]--;
            n /= i;
            if (max < i)
            {
                max = i;
            }
        }
        if (i == 2)
        {
            i++;
        }
        else
        {
            i += 2;
        }
    }
}
void solve(int n, int *arr, int &max, int r)
{
    for (int i = 2; i <= n; i++)
    {
        tu(i, arr, max);
    }
    for (int i = 2; i <= r; i++)
    {
        mau(i, arr, max);
    }
    for (int i = 2; i <= n - r; i++)
    {
        mau(i, arr, max);
    }
    long long s = 1;
    for (int i = 2; i <= max; i++)
    {
        if (arr[i] > 0)
        {
            s *= mu(i, arr[i]);
            s %= MOD;
        }
    }
    cout << s << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, r;
        cin >> n >> r;
        int arr[100000] = {}, max = 0;
        solve(n, arr, max, r);
    }

    return 0;
}