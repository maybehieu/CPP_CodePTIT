#include <iostream>

using std::cin;
using std::cout;
using std::endl;
long long max(long long a, long long b)
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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long best = -99999999, sum = 0;
        for (int i = 0; i < n; i++)
        {
            // sum += arr[i];
            sum = max(arr[i], sum + arr[i]);
            best = max(best, sum);
        }
        cout << best << endl;
    }

    return 0;
}