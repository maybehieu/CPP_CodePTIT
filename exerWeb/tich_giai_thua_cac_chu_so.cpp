#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> res;
void solve(std::string a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7')
        {
            res[a[i] - '0']++;
        }
        if (a[i] == '4')
        {
            res[2] += 2, res[3]++;
        }
        if (a[i] == '6')
        {
            res[5]++, res[3]++;
        }
        if (a[i] == '8')
        {
            res[7]++, res[2] += 3;
        }
        if (a[i] == '9')
        {
            res[7]++, res[3] += 2, res[2]++;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        std::string a;
        cin >> n >> a;
        res.resize(10, 0);
        solve(a, n);
        for (int i = 9; i > 1; i--)
        {
            while (res[i] > 0)
            {
                cout << i;
                res[i]--;
            }
        }
        cout << endl;
        res.clear();
    }

    return 0;
}