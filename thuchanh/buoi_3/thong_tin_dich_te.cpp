#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int arr[100][100], tong = 0, m, n;

void solve(int a, int b)
{
    if (a > 0 && b > 0)
    {
        if (arr[a - 1][b - 1] != -1)
        {
            tong += arr[a - 1][b - 1];
            arr[a - 1][b - 1] = 0;
        }
    }
    if (b > 0)
    {
        if (arr[a][b - 1] != -1)
        {
            tong += arr[a][b - 1];
            arr[a][b - 1] = 0;
        }
    }
    if (a < m - 1 && b > 0)
    {
        if (arr[a + 1][b - 1] != -1)
        {
            tong += arr[a + 1][b - 1];
            arr[a + 1][b - 1] = 0;
        }
    }
    if (a < m - 1)
    {
        if (arr[a + 1][b] != -1)
        {
            tong += arr[a + 1][b];
            arr[a + 1][b] = 0;
        }
    }
    if (a < m - 1 && b < n - 1)
    {
        if (arr[a + 1][b + 1] != -1)
        {
            tong += arr[a + 1][b + 1];
            arr[a + 1][b + 1] = 0;
        }
    }
    if (b < n - 1)
    {
        if (arr[a][b + 1] != -1)
        {
            tong += arr[a][b + 1];
            arr[a][b + 1] = 0;
        }
    }
    if (a > 0 && b < n - 1)
    {
        if (arr[a - 1][b + 1] != -1)
        {
            tong += arr[a - 1][b + 1];
            arr[a - 1][b + 1] = 0;
        }
    }
    if (a > 0)
    {
        if (arr[a - 1][b] != -1)
        {
            tong += arr[a - 1][b];
            arr[a - 1][b] = 0;
        }
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
            {
                solve(i, j);
            }
        }
    }
    cout << tong;
    return 0;
}