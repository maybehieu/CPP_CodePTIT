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
        long long a = 0, b = 1, c;
        cin >> n;
        if (n == 0 || n == 1)
        {
            cout << "1" << endl;
            break;
        }
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }

    return 0;
}