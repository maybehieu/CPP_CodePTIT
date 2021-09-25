#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n, arr[100][100] = {}, temp[100][100] = {};
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        //problem handling
        for (int k = 0; k < m / 2; k++)
        {
            for (int i = k + 1; i < m - k; i++)
            {
                temp[k][i] = arr[k][i - 1];
            }
            for (int i = k + 1; i < n - k; i++)
            {
                temp[i][m - k - 1] = arr[i - 1][m - k - 1];
            }
            for (int i = m - k - 2; i >= k; i--)
            {
                temp[n - k - 1][i] = arr[n - k - 1][i + 1];
            }
            for (int i = n - k - 2; i >= k; i--)
            {
                temp[i][k] = arr[i + 1][k];
            }
        }
        //printing
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (temp[i][j] == 0)
                {
                    temp[i][j] = arr[i][j];
                }
                cout << temp[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}