#include <iostream>
// #include <numeric>
#include <algorithm>

long long bcnn(long long a, long long b)
{
    int ucln = std::__gcd(a, b);
    return a * b / ucln;
}
long long solve(int n)
{
    long long temp = 1;
    for (long long i = 2; i <= n; i++)
    {
        temp = bcnn(temp, i);
    }
    return temp;
}
int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n;
        std::cin >> n;
        std::cout << solve(n) << std::endl;
    }
}