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
        int arr[n], temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp[i] = arr[i];
        }
        std::sort(arr, arr + n);
        int first, second;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != temp[i])
            {
                first = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] != temp[i])
            {
                second = i + 1;
                break;
            }
        }
        cout << first << " " << second << endl;
    }

    return 0;
}