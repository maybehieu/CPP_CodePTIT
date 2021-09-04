#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
int check(long long n)
{
    if (n == 1)
    {
        return 0;
    }
    long long sum = 0, i, j;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != 1)
            {
                j = n / i;
            }
            sum = sum + i + j;
            j = 0;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
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