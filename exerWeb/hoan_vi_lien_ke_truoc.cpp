#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
void solve(int *arr, int n)
{
    int pos;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            pos = i - 1;
            break;
        }
    }
    int arrMax = 0, maxPos = 0;
    for (int i = pos + 1; i < n; i++)
    {
        if (arrMax < arr[i])
        {
            arrMax = arr[i];
            maxPos = i;
        }
    }
    std::swap(arr[pos], arr[maxPos]);
    std::sort(arr + pos + 1, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
        }
        solve(arr, n);
        cout << endl;
    }

    return 0;
}