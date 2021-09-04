#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> ngTo, arr;
void sangEra()
{
    ngTo.resize(1e6 + 1, 0);
    ngTo[0] = 1, ngTo[1] = 1;
    for (int i = 2; i <= 1e3; i++)
    {
        if (ngTo[i] == 0)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                ngTo[j] = 1;
            }
        }
    }
}

int main()
{
    sangEra();
    int test;
    cin >> test;
    while (test--)
    {
        int m, n, dem = 0;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            if (!ngTo[i])
            {
                dem++;
            }
        }
        cout << dem << endl;
    }

    return 0;
}