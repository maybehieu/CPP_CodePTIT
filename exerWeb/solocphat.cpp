#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int check(long long n)
{
    while (n > 0)
    {
        int cs = n % 10;
        if (cs != 0 && cs != 6 && cs != 8)
        {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "YES" << endl;
    return 0;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        check(n);
    }

    return 0;
}