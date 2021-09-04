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
        int min = 99999999;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] < min)
            {
                min = arr[i] - arr[i - 1];
            }
        }
        cout << min << endl;
    }

    return 0;
}