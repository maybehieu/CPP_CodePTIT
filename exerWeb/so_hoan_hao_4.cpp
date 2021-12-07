#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int check(long long n)
{
    if (n > (long long)1e12)
        return false;
    long long s = 1, k = sqrt(n);
    for (long long i = 2; i <= k; i++)
    {
        if (n % i == 0)
        {
            s += i + n / i;
        }
    }
    return (s == n) ? 1 : 0;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}