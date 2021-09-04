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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::sort(arr, arr + n);
        for (int i = 0; i < k; i++)
        {
            cout << arr[n - 1 - i] << " ";
        }
        cout << endl;
    }

    return 0;
}