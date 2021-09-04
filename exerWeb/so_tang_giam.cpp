#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
bool isPrime(int n)
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
bool checkGiam(int a)
{
    int b = a / 10, temp;
    int max = a % 10;
    while (b != 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp >= max)
        {
            return false;
        }
        else
        {
            max = temp;
        }
    }
    return true;
}
bool checkTang(int a)
{
    int b = a / 10, temp;
    int min = a % 10;
    while (b != 0)
    {
        temp = b % 10;
        b /= 10;
        if (temp <= min)
        {
            return false;
        }
        else
        {
            min = temp;
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
        int n, min = 1, max, dem = 0;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            min *= 10;
        }
        max = min * 10;
        for (int i = min; i < max; i++)
        {
            if (checkGiam(i) && isPrime(i))
            {
                dem++;
            }
            else if (checkTang(i) && isPrime(i))
            {
                dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}