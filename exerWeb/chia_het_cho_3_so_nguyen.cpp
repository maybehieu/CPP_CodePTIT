#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long temp = 1;
        for (int i = 1; i < n; i++)
        {
            temp *= 10;
        }
        long long m = (x * y) / std::__gcd(x, y);
        long long boi = (m * z) / std::__gcd(m, z);
        long long m2 = temp / boi;
        if (temp % boi != 0)
        {
            m2++;
        }
        long long res = m2 * boi;
        if (res > temp * 10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}