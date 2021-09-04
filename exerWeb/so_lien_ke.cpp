#include <iostream>

using std::cin;
using std::cout;
using std::endl;
bool check(long long n)
{
    while (n > 9)
    {
        int tmp1 = n % 10, tmp2 = (n / 10) % 10;
        if (tmp1 - tmp2 != 1 && tmp2 - tmp1 != 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (check(n))
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