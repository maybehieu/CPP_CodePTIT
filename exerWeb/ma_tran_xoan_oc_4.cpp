#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    int arr[n * n], res[n][n];
    for (int i = 0; i < n * n; i++)
    {
        cin >> arr[i];
    }
    std::sort(arr, arr + (n * n));
    int d = 0, row = n - 1, col = n - 1, k = 0;
    while (d <= n / 2)
    {
        for (int i = d; i <= col; i++)
        {
            res[d][i] = arr[k++];
        }
        for (int i = d + 1; i <= row; i++)
        {
            res[i][col] = arr[k++];
        }
        for (int i = col - 1; i >= d; i--)
        {
            res[row][i] = arr[k++];
        }
        for (int i = row - 1; i > d; i--)
        {
            res[i][d] = arr[k++];
        }
        row--;
        col--;
        d++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}