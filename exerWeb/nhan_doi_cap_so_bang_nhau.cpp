#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> res;

void solve(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            res.push_back(arr[i]);
        }
    }
    res.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == arr[i - 1])
            {
                arr[i - 1] *= 2;
                arr[i] = 0;
            }
        }
        solve(arr, n);
        cout << endl;
        res.clear();
    }

    return 0;
}