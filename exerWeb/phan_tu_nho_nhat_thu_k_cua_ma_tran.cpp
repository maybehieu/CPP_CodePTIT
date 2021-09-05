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
        int arr[n * n];
        for (int i = 0; i < n * n; i++)
        {
            cin >> arr[i];
        }
        std::sort(arr, arr + (n * n));
        cout << arr[k - 1] << endl;
    }

    return 0;
}