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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long best = -100000;
        for (int i = 0; i < n; i++)
        {
            long long max = 1;
            for (int j = i; j < n; j++)
            {
                max *= arr[j];
                if (best < max)
                {
                    best = max;
                }
            }
        }
        cout << best << endl;
    }

    return 0;
}