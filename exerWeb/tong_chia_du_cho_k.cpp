#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int check(int n, long long k)
{
    long long sum = 0;
    if (n < k)
    {
        sum = n * (n + 1) / 2;
    }
    else
    {
        int a = n / k;
        int b = n % k;
        sum = (k * (k - 1) / 2) * a + b * (b + 1) / 2;
    }
    if (sum == k)
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
        int n;
        long long k;
        cin >> n >> k;
        cout << check(n, k) << endl;
    }

    return 0;
}