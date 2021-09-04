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
        long long n, a = 0, b = 1, c = 1;
        cin >> n;
        if (n == 0 || n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        while (c < n)
        {
            c = a + b;
            a = b;
            b = c;
        }
        if (c == n)
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