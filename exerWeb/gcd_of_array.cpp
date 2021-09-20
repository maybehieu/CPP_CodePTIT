#include <iostream>
const long long MOD = 1e9 + 7;

using std::cin;
using std::cout;
using std::endl;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int gcdArray(int *arr, int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = gcd(res, arr[i]);
    }
    return res;
}
long long tich(int *arr, int n)
{
}
long long solve(int *arr, int n)
{
    long long res = 1;
    for (int i = 0; i < n; i++)
    {
    }
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
    }

    return 0;
}