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
        int arr[m + n];
        for (int i = 0; i < m + n; i++)
        {
            cin >> arr[i];
        }
        std::sort(arr, arr + n + m);
        for (int i = 0; i < m + n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}