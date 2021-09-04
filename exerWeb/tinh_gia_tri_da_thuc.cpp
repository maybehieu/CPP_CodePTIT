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
        int n, x;
        cin >> n >> x;
        int arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            long long temp = x;
            for (int j = 0; j < n - 1 - i; j++)
            {
                temp = ((temp % mod) * (temp % mod)) % mod;
            }
            sum += ((arr[i] % mod) * (temp % mod)) % mod;
        }
    }

    return 0;
}