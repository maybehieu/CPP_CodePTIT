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
        int i;
        for (i = 0; i <= n / 2 - 1; i++)
        {
            cout << arr[n - i - 1] << " " << arr[i] << " ";
        }
        if (n % 2 == 1)
        {
            cout << arr[n - 1 - i];
        }
        cout << endl;
    }

    return 0;
}