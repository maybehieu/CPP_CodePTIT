#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
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
        int n;
        cin >> n;
        int temp = n, sum1 = 0, sum2 = 0, a = 2;
        for (int a = 2; a <= temp; a++)
        {
            while (temp % a == 0)
            {
                int i = a;
                while (i > 0)
                {

                    sum1 += i % 10;
                    i /= 10;
                }
                temp /= a;
            }
        }

        temp = n;
        while (temp > 0)
        {
            sum2 += temp % 10;
            temp /= 10;
        }
        if (sum1 == sum2 && !isPrime(n))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}