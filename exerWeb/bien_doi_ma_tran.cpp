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
        int n;
        cin >> n;
        int arr[n][n];
        int max = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                sum += arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                temp += arr[i][j];
            }
            if (max < temp)
            {
                max = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                temp += arr[j][i];
            }
            if (max < temp)
            {
                max = temp;
            }
        }
        cout << max * n - sum << endl;
    }

    return 0;
}