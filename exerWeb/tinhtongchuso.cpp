#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long solve(long long n)
{
    long long sum = 0;
    if (n < 10)
    {
        return n;
    }
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return solve(sum);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}