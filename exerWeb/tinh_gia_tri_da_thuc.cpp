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
        for (int i = n - 1; i >= 0; i--)
        {
            cin >> arr[i];
        }
        long long sum = 0, temp = 1;
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                temp *= x;
            }
            temp %= mod;
            sum += temp * arr[i];
            sum %= mod;
        }
        cout << sum << endl;
    }

    return 0;
}