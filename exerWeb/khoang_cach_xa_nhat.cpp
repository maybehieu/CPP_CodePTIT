#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, max = 0;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= i + max + 1; j--)
            {
                if (arr[j] > arr[i] && max < j - i)
                {
                    max = j - i;
                    break;
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}