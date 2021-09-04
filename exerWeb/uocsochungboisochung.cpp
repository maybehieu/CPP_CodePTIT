#include <iostream>

long long gcd(long long m, long long n)
{
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    return m;
}
long long lcm(long long m, long long n)
{
    return (m * n) / gcd(m, n);
}

int main()
{
    int test;
    std::cin >> test;
    while (test)
    {
        long long m, n;
        std::cin >> m >> n;
        std::cout << lcm(m, n) << " " << gcd(m, n) << std::endl;
        test--;
    }
}