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
        long long temp;
        while (n > 1)
        {
            temp = uoc(n);
            // std::cout << temp << " ";
            n /= temp;
        }
        std::cout << temp << std::endl;
    }
}