#include <iostream>
#include <algorithm>

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
        cin >> m >> n;
        int arr1[m][n], arr2[m * n], pos = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
                arr2[pos++] = arr1[i][j];
            }
        }
        std::sort(arr2, arr2 + pos);
        for (int i = 0; i < pos; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}