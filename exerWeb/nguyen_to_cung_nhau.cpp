#include <iostream>
#include <math.h>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
bool check(int a, int b)
{
    return std::__gcd(a, b) == 1;
}
bool isPrime(long long n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, dem = 1;
        cin >> x;
        if (isPrime(x))
        {
            dem = x - 1;
        }
        else
        {
            for (int i = 2; i < x; i++)
            {
                if (check(i, x))
                {
                    dem++;
                }
            }
        }
        if (isPrime(dem))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}