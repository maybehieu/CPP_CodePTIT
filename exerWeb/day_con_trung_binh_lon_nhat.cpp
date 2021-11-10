#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n + 5] = {};
        long long b;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long max = -1e9;
        int c;
        for (int i = 0; i <= n - k; i++)
        {
            b = 0;
            for (int j = i; j < i + k; j++)
            {
                b += arr[j];
            }
            if (b > max)
            {
                max = b;
                c = i;
            }
        }
        for (int i = c; i < c + k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}