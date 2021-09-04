#include <iostream>
#include <math.h>

bool checkPrime(int n)
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
    int m, n;
    std::cin >> m >> n;
    if (m > n)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
    {
        if (checkPrime(i))
        {
            std::cout << i << " ";
        }
    }
}