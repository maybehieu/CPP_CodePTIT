#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

std::vector<int> ngTo, ngTo2;
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
            ngTo2.push_back(i);
        }
    }
}
void solve(int n)
{
    int i = 0;
    while (n - ngTo2[i] >= n / 2)
    {
        if (!ngTo[n - ngTo2[i]])
        {
            cout << ngTo2[i] << " " << n - ngTo2[i] << endl;
            return;
        }
        i++;
    }
    cout << "-1" << endl;
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
        solve(n);
    }

    return 0;
}