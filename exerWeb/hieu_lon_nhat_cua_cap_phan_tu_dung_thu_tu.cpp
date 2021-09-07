#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int MAX(int a, int b)
{
    return (a > b) ? a : b;
}
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
        long long max = -1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] - arr[i] > 0)
                {
                    max = MAX(max, arr[j] - arr[i]);
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}