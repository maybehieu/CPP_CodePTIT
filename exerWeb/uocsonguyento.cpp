#include <iostream>
#include <math.h>

long long uoc(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        long long n;
        std::cin >> n;
        while (n > 1)
        {
            long long temp = uoc(n);
            std::cout << temp << " ";
            n /= temp;
        }
        std::cout << std::endl;
    }
}