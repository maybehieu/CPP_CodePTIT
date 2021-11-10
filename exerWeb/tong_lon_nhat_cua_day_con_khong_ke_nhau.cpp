#include <iostream>
#include <algorithm>
const long long MOD = 1e9 + 7;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long a[n + 5], b[n + 5] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        b[1] = a[1];
        b[2] = std::max(a[1], a[2]);
        for (int i = 3; i <= n; i++)
        {
            b[i] = std::max(b[i - 2] + a[i], b[i - 1]);
        }
        cout << b[n] << endl;
    }

    return 0;
}