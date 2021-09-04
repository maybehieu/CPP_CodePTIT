#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        long long k, sum = 0;
        cin >> n >> k;
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
        cout << sum << endl;
    }

    return 0;
}