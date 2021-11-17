#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    int arr[n + 5] = {};
    if (k == n)
    {
        cout << b << endl;
    }
    else
    {
        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;
            arr[x] = 1;
        }
        int sum = 0;
        for (int i = 1; i <= k; i++)
        {
            sum += arr[i];
        }
        int min = sum;
        for (int i = 2; i <= n - k + 1; i++)
        {
            sum = sum - arr[i - 1] + arr[i + k - 1];
            min = (sum < min) ? sum : min;
        }
        cout << min << endl;
    }

    return 0;
}