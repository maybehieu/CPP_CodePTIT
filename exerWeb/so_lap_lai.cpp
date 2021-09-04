#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a, x, y;
        cin >> a >> x >> y;
        for (int i = 0; i < std::__gcd(x, y); i++)
        {
            cout << a;
        }
        cout << endl;
    }

    return 0;
}