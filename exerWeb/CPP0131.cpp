#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> ngTo, arr;
void sangEra()
{
    ngTo.resize(1e6 + 1, 0);
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
    for (int i = 2; i < 1e6; i++)
    {
        if (!ngTo[i])
        {
            arr.push_back(i);
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
        int n;
        cin >> n;
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; arr[j] <= i; j++)
            {
                if (i % arr[j] == 0)
                {
                    cout << arr[j] << " ";
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}