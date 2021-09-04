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
        int min = std::abs(arr[0] + arr[1]), MIN = arr[0] + arr[1];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int min1 = std::abs(arr[i] + arr[j]);
                if (min > min1)
                {
                    min = min1;
                    MIN = arr[i] + arr[j];
                }
            }
        }
        cout << MIN << endl;
    }

    return 0;
}