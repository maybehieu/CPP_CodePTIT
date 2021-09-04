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
        int m, n;
        cin >> n >> m;
        int arr[n][m], iAxis[105] = {}, jAxis[105] = {}, step = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    iAxis[step] = i, jAxis[step++] = j;
                }
            }
        }
        for (int a = 0; a < step; a++)
        {
            int y = jAxis[a], x = iAxis[a];
            for (int i = 0; i < n; i++)
            {
                arr[i][y] = 1;
            }
            for (int i = 0; i < m; i++)
            {
                arr[x][i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}