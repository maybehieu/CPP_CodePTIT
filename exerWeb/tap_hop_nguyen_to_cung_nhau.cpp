#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

bool check(long long n, long long m)
{
    if (m % 2 == 0 && (n % 4 == 0 || (n + 1) % 4 == 0))
    {
        return true;
    }
    else if (m % 2 != 0 && ((n % 2 == 0 && n % 4 != 0) || (n + 1) % 2 == 0 && (n + 1) % 4 != 0))
    {
        return true;
    }
    return false;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long m, n;
        cin >> n >> m;
        if (!check(n, m))
        {
            cout << "No\n";
        }
        else
        {
            long long a = (n * (n + 1) / 2 + m) / 2;
            long long b = (n * (n + 1) / 2 - m) / 2;
            if (std::__gcd(a, b) != 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}