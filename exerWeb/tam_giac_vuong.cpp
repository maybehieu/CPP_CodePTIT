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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] *= arr[i];
        }
        std::sort(arr, arr + n);
        int x1 = n - 1, x2 = x1 - 2, x3 = 0;
        while (x2 != 0 && arr[x1] != arr[x2] + arr[x3])
        {
            if (arr[x2] + arr[x3] < arr[x1])
            {
                x3++;
            }
            else if (arr[x2] + arr[x3] > arr[x1])
            {
                x2--;
            }
            if (x2 == x3)
            {
                x1--;
                x2 = x1 - 1;
                x3 = 0;
            }
        }
        if (x2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}