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
        long long n, sum = 0;
        cin >> n;
        long long temp = n;
        while (temp > 0)
        {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        if (sum == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}