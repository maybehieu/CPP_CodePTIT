#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
int minSwap(int *arr, int n, int k)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            dem++;
        }
    }
    int step = 0;
    for (int i = 0; i < dem; i++)
    {
        if (arr[i] > k)
        {
            step++;
        }
    }
    int res = step;

    for (int i = 0, j = dem; j < n; i++, j++)
    {
        if (arr[i] > k)
        {
            step--;
        }
        if (arr[j] > k)
        {
            step++;
        }
        res = std::min(res, step);
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << minSwap(arr, n, k) << endl;
    }

    return 0;
}