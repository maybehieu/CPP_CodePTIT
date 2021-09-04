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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::sort(arr, arr + n);
        int check = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                cout << arr[i] << " " << arr[i + 1] << endl;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}