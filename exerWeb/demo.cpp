#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long a[n + 5];
        long long b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long max = -1e9;
        int c;
        for (int i = 0; i <= n - k; i++)
        {
            b = 0;
            for (int j = i; j < i + k; j++)
            {
                b += a[j];
            }
            if (b > max)
            {
                max = b;
                c = i;
            }
        }
        for (int i = c; i < c + k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}