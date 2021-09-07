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
        for (int i = 0; i < n / 2; i++)
        {
            cout << arr[i] << " " << arr[i + (n + 1) / 2] << " ";
        }
        if (n % 2 == 1)
        {
            cout << arr[n / 2];
        }
        cout << endl;
    }

    return 0;
}