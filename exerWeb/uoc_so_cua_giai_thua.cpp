#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int solve(int n, int p)
{
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = i;
        while (temp % p == 0)
        {
            dem++, temp /= p;
        }
    }
    return dem;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, p;
        cin >> n >> p;
        cout << solve(n, p) << endl;
    }

    return 0;
}