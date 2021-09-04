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
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        if (a > b)
        {
            std::swap(a, b);
        }
        int dem = 0;
        for (int i = m; i <= n; i++)
        {
            if (i % a == 0 || i % b == 0)
            {
                dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}