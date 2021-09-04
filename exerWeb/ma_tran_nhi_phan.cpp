#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n;
    cin >> n;
    int arr[n][3], res[n] = {};
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j])
            {
                dem++;
            }
        }
        if (dem >= 2)
        {
            res[i] = 1;
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (res[i])
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}