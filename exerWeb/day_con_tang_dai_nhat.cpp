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
        int temp[n] = {}, max = -1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp[i] = (temp[i] > temp[j] + 1) ? temp[i] : temp[j] + 1;
                    if (max < temp[i])
                    {
                        max = temp[i];
                    }
                }
            }
        }
        cout << max + 1 << endl;
    }

    return 0;
}