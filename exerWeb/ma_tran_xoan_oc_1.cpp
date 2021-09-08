#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
std::vector<int> res;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> m >> n;
        int arr[m][n];
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[j][i];
            }
        }
        int row = m - 1, col = n - 1, r = 0, c = 0;
        while (res.size() < m * n)
        {
            for (int i = c; i <= col; i++)
            {
                res.push_back(arr[r][i]);
            }
            for (int i = r + 1; i <= row; i++)
            {
                res.push_back(arr[i][col]);
            }
            for (int i = col - 1; i >= c; i--)
            {
                res.push_back(arr[row][i]);
            }
            for (int i = row - 1; i > r; i--)
            {
                res.push_back(arr[i][c]);
            }
            c++, r++;
            col--, row--;
        }
        for (int i = 0; i < m * n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        res.clear();
    }

    return 0;
}